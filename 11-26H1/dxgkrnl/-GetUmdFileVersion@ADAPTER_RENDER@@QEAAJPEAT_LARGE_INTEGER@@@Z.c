/*
 * XREFs of ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1403B02D8
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z @ 0x1403B072C (-GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z.c)
 *     ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x1403B089C (-DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetUmdFileVersion(union _LARGE_INTEGER *this, union _LARGE_INTEGER *a2)
{
  __int64 v3; // rdi
  enum _KMTUMDVERSION v5; // ebx
  int UMDFileName; // eax
  const WCHAR *v7; // r14
  unsigned __int64 v8; // r13
  size_t v9; // r12
  size_t v10; // rax
  __int16 v11; // bx
  int FileVersion; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  size_t v15; // rbx
  unsigned __int16 MaximumLength; // ax
  size_t v17; // rbx
  int v18; // eax
  const WCHAR *v19; // rax
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-20h] BYREF
  wchar_t *Src[2]; // [rsp+60h] [rbp-10h] BYREF
  int v22; // [rsp+B0h] [rbp+40h] BYREF
  union _LARGE_INTEGER *v23; // [rsp+B8h] [rbp+48h]

  v23 = a2;
  v22 = 0;
  Destination = 0LL;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3991;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pFileVersion != NULL", 3991LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[90].QuadPart != -1 )
  {
    LODWORD(v3) = 0;
LABEL_5:
    *v23 = this[90];
    goto LABEL_6;
  }
  v5 = KMTUMDVERSION_DX9;
  *(_OWORD *)Src = 0LL;
  while ( 1 )
  {
    UMDFileName = ADAPTER_RENDER::GetUMDFileName((ADAPTER_RENDER *)this, v5, (struct _UNICODE_STRING *)Src);
    v7 = Src[1];
    if ( UMDFileName >= 0 && LOWORD(Src[0]) && (LOWORD(Src[0]) != 4 || *(_DWORD *)Src[1] != 4063292) )
      break;
    if ( (unsigned int)++v5 >= (NUM_KMTUMDVERSIONS|KMTUMDVERSION_DX11) )
    {
      if ( v5 == (NUM_KMTUMDVERSIONS|KMTUMDVERSION_DX11) )
      {
        LODWORD(v3) = -1073741811;
        goto LABEL_6;
      }
      break;
    }
  }
  v8 = WORD1(Src[0]);
  v9 = (unsigned __int64)WORD1(Src[0]) >> 1;
  v10 = wcsnlen(Src[1], v9);
  v11 = 2 * v10;
  if ( 2 * v10 >= v8 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4028;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Size < UmdDriverName.MaximumLength",
      4028LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Destination.MaximumLength = v11 + 12;
  Destination.Buffer = (wchar_t *)operator new[]((unsigned __int16)(v11 + 12), 0x4B677844u, 256LL);
  if ( !Destination.Buffer )
  {
    LODWORD(v3) = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 4039;
LABEL_35:
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for the user mode driver name string on adapter 0x%I64x.",
      this[2].QuadPart,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_6;
  }
  RtlAppendUnicodeToString(&Destination, L"\\??\\");
  RtlAppendUnicodeToString(&Destination, v7);
  FileVersion = DxgkpGetFileVersion(&Destination, this + 90, &v22);
  LODWORD(v3) = FileVersion;
  if ( FileVersion >= 0 )
    goto LABEL_5;
  if ( FileVersion == v22 )
  {
    WdLogNewEntry5_WdTrace(v14, v13);
    WdLogGlobalForLineNumber = 4059;
    v15 = 2 * wcsnlen(v7, v9);
    if ( v15 >= v8 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4065;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Size < UmdDriverName.MaximumLength",
        4065LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    MaximumLength = v15 + 56;
    Destination.Length = 0;
    Destination.MaximumLength = v15 + 56;
    if ( Destination.Buffer )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Destination.Buffer);
      MaximumLength = Destination.MaximumLength;
      Destination.Buffer = 0LL;
    }
    Destination.Buffer = (wchar_t *)operator new[](MaximumLength, 0x4B677844u, 256LL);
    if ( Destination.Buffer )
    {
      RtlAppendUnicodeToString(&Destination, L"\\Systemroot\\System32\\");
      RtlAppendUnicodeToString(&Destination, v7);
      v17 = v15 >> 1;
      if ( v17 )
      {
        v19 = &v7[v17 - 1];
        while ( *v19 != 46 )
        {
          --v19;
          if ( !--v17 )
            goto LABEL_24;
        }
      }
      else
      {
LABEL_24:
        RtlAppendUnicodeToString(&Destination, L".DLL");
      }
      v18 = DxgkpGetFileVersion(&Destination, this + 90, 0LL);
      v3 = v18;
      if ( v18 < 0 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogSingleEntry2)(
          2LL,
          (union _LARGE_INTEGER)this[2].QuadPart,
          v18);
        WdLogGlobalForLineNumber = 4123;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to open the user mode driver DLL on adapter %I64d (ntStatus = %I64d).",
          this[2].QuadPart,
          v3,
          0LL,
          0LL,
          0LL);
        goto LABEL_6;
      }
      goto LABEL_5;
    }
    LODWORD(v3) = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 4083;
    goto LABEL_35;
  }
LABEL_6:
  if ( Destination.Buffer )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Destination.Buffer);
  return (unsigned int)v3;
}
