/*
 * XREFs of LdrResSearchResource @ 0x1800AB1B0
 * Callers:
 *     RtlLoadString @ 0x1800AAE90 (RtlLoadString.c)
 *     LdrResFindResourceDirectory @ 0x1800AB120 (LdrResFindResourceDirectory.c)
 *     LdrResFindResource @ 0x18013C2E0 (LdrResFindResource.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlLcidToLocaleName @ 0x180005EB0 (RtlLcidToLocaleName.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrAddLoadAsDataTable @ 0x180032190 (LdrAddLoadAsDataTable.c)
 *     RtlFreeAnsiString @ 0x180056B20 (RtlFreeAnsiString.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A7CD0 (LdrpTraceLoadMUIDll.c)
 *     LdrpResGetMappingSize @ 0x1800A7DC0 (LdrpResGetMappingSize.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A80C0 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800AA63C (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFileHandle @ 0x1800AB978 (LdrpResValidateFileHandle.c)
 *     LdrpResValdiateMappedAddress @ 0x1800AB9F0 (LdrpResValdiateMappedAddress.c)
 *     LdrpResValidateFilePath @ 0x1800D92B8 (LdrpResValidateFilePath.c)
 *     LdrpResMapFile @ 0x180109594 (LdrpResMapFile.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrResSearchResource(
        wchar_t *Handle,
        void *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // r12
  wchar_t *v11; // r14
  wchar_t *v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r15
  int v15; // ecx
  int v16; // esi
  bool v17; // zf
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rsi
  __int64 result; // rax
  unsigned __int64 *v22; // rcx
  int v23; // r12d
  unsigned __int64 *v24; // r14
  unsigned int v25; // eax
  size_t v26; // rax
  __int16 v27; // cx
  __int64 v28; // rcx
  wchar_t *v29; // rbx
  int v30; // eax
  wchar_t *v31; // r9
  wchar_t *v32; // rdx
  __int64 v33; // [rsp+50h] [rbp-D8h] BYREF
  int v34; // [rsp+58h] [rbp-D0h]
  int v35; // [rsp+5Ch] [rbp-CCh] BYREF
  unsigned __int64 v36[2]; // [rsp+60h] [rbp-C8h] BYREF
  wchar_t *String2; // [rsp+70h] [rbp-B8h]
  void *Src[2]; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+88h] [rbp-A0h]
  wchar_t *v40; // [rsp+90h] [rbp-98h]
  __int64 v41; // [rsp+98h] [rbp-90h]
  __int64 v42; // [rsp+A0h] [rbp-88h]
  int v43; // [rsp+A8h] [rbp-80h]
  __int64 v44; // [rsp+B0h] [rbp-78h]
  _QWORD v45[2]; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD v46[2]; // [rsp+C8h] [rbp-60h] BYREF
  wchar_t *String; // [rsp+D8h] [rbp-50h]

  v9 = a3;
  LODWORD(v39) = a3;
  Src[0] = a2;
  v11 = Handle;
  String2 = Handle;
  v44 = a5;
  v33 = a6;
  v42 = a7;
  v41 = a8;
  v12 = 0LL;
  v40 = 0LL;
  v35 = 0;
  v36[0] = 3538996LL;
  v36[1] = (unsigned __int64)L"LdrResSearchResource Enter";
  v45[0] = 3407922LL;
  v45[1] = L"LdrResSearchResource Exit";
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v13 = 2147353477LL;
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    v14 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v28 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v28 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v36, *(unsigned __int8 *)v28);
  }
  else
  {
    v14 = 2147353476LL;
  }
  if ( !v11 || !a2 || v42 && !v41 )
    goto LABEL_65;
  v15 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v15 = a4;
  v16 = v15 | 0x1000;
  if ( (v15 & 0x2000) != 0 )
    v16 = v15;
  if ( (v16 & 0xFFF00000) != 0 )
    goto LABEL_28;
  if ( (unsigned int)v9 < 3 && (v16 & 2) == 0 || (unsigned int)v9 > 4 )
  {
    v19 = -1073741583;
    goto LABEL_29;
  }
  if ( (v16 & 0x41) != 0 )
  {
    if ( (_DWORD)v9 != 4 )
      return 3221225713LL;
  }
  else if ( (_DWORD)v9 != 4 )
  {
    goto LABEL_18;
  }
  if ( (v16 & 0x41) == 0 )
    return 3221225714LL;
LABEL_18:
  if ( (v16 & 0x100) != 0 )
  {
    v17 = (v16 & 0xE00) == 0;
    goto LABEL_20;
  }
  v18 = v16 & 0xC00;
  if ( (v16 & 0x200) != 0 )
  {
    v17 = v18 == 0;
LABEL_20:
    if ( v17 )
      goto LABEL_21;
LABEL_28:
    v19 = -1073741582;
    goto LABEL_29;
  }
  if ( v18 == 3072 )
    goto LABEL_28;
LABEL_21:
  v43 = v16 & 0x8000;
  if ( (v16 & 0x8000) != 0 && (~(_WORD)v16 & 0x810) != 0
    || (v16 & 0x1000) != 0 && (v16 & 0x2000) != 0
    || (v16 & 0x18) == 0x18 )
  {
    goto LABEL_28;
  }
  v36[0] = 0LL;
  if ( (v16 & 0x20000) != 0 )
  {
    if ( (v16 & 0x400) == 0 || (v22 = (unsigned __int64 *)v33) == 0LL || !*(_QWORD *)v33 )
    {
      v19 = -1073741811;
      v34 = -1073741811;
      v20 = 2147353477LL;
      goto LABEL_30;
    }
    v36[0] = *(_QWORD *)v33;
  }
  else
  {
    v22 = (unsigned __int64 *)v33;
  }
  if ( (v16 & 0x80000) != 0 )
  {
    if ( (v16 & 0x300) == 0 || !v22 || !*v22 )
    {
      v19 = -1073741811;
      v34 = -1073741811;
      v20 = 2147353477LL;
      goto LABEL_30;
    }
    v36[0] = *v22;
  }
  memmove(v46, Src[0], 8 * v9);
  v23 = 3;
  if ( (unsigned int)v39 <= 3 )
    v23 = v39;
  if ( v23 == 3 )
  {
    if ( (unsigned __int64)String >= 0x10000 )
    {
      if ( *String )
      {
        v39 = 0LL;
        Src[0] = 0LL;
        Src[1] = String;
        v26 = 2 * wcslen(String);
        v39 = v26;
        v27 = v26;
        if ( v26 >= 0xFFFE )
        {
          LOWORD(v26) = -4;
          v39 = 65532LL;
          v27 = -4;
        }
        LOWORD(Src[0]) = v26;
        WORD1(Src[0]) = v27 + 2;
        if ( !RtlCultureNameToLCID((unsigned __int16 *)Src, &v35) )
          return 3221225485LL;
      }
      else
      {
        v35 = 0;
      }
      String = (wchar_t *)(unsigned __int16)v35;
      goto LABEL_41;
    }
    if ( !String )
      goto LABEL_41;
    if ( ((unsigned __int16)String & 0x3FF) != 0 && String != (wchar_t *)127 )
    {
      *(_OWORD *)Src = 0LL;
      if ( (int)RtlLcidToLocaleName((int)String, (__int64)Src, 2, 1u) >= 0 )
      {
        if ( Src[1] )
          RtlFreeAnsiString((PUNICODE_STRING)Src);
        goto LABEL_41;
      }
    }
LABEL_65:
    v19 = -1073741811;
    goto LABEL_29;
  }
LABEL_41:
  if ( (v16 & 0x300) == 0 )
  {
    if ( (v16 & 0x400) == 0 && ((~v16 & 0x8000) == 0 || (v16 & 0x800) == 0) )
    {
LABEL_119:
      v11 = String2;
LABEL_44:
      if ( v43 )
      {
        result = LdrpResValidateFileHandle(v11);
        if ( (int)result < 0 )
          return result;
        v25 = LdrpResSearchResourceHandle(
                (char *)v11,
                v16,
                (__int64)v46,
                v23,
                (unsigned __int64 *)v44,
                (unsigned __int64 *)v33,
                (void *)v42,
                (_DWORD *)v41);
      }
      else
      {
        v24 = (unsigned __int64 *)v33;
        v19 = LdrpResSearchResourceMappedFile(
                (__int64)v12,
                v36[0],
                v16,
                (__int64)v46,
                v23,
                (unsigned int **)v44,
                (unsigned __int64 *)v33,
                (void *)v42,
                (unsigned int *)v41);
        if ( v19 != -1073741686 )
          goto LABEL_29;
        if ( ((v46[0] - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 )
          goto LABEL_29;
        v33 = 0LL;
        if ( (int)LdrLoadAlternateResourceModuleEx((__int64)v12, 0xF2EEu, (size_t *)&v33, 0LL, 0x1000000) < 0 )
          goto LABEL_29;
        v36[0] = 0LL;
        if ( (int)LdrpResGetMappingSize(v33, v36, v16, 0) < 0 )
          goto LABEL_29;
        v25 = LdrpResSearchResourceMappedFile(
                v33,
                v36[0],
                v16 | 0x1000000u,
                (__int64)v46,
                v23,
                (unsigned int **)v44,
                v24,
                (void *)v42,
                (unsigned int *)v41);
      }
      v19 = v25;
LABEL_29:
      v20 = 2147353477LL;
LABEL_30:
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v20 = (__int64)NtCurrentPeb()->SharedData + 555;
      if ( (*(_BYTE *)v20 & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v14 = (__int64)NtCurrentPeb()->SharedData + 554;
        LdrpTraceLoadMUIDll((unsigned __int16 *)v45, *(unsigned __int8 *)v14);
      }
      return v19;
    }
    if ( (v16 & 0x400) != 0 )
    {
      if ( (v16 & 0x1000) != 0 )
      {
        v29 = String2;
        result = LdrpResValidateFilePath(String2);
        goto LABEL_107;
      }
    }
    else if ( (v16 & 0x1000) != 0 )
    {
      v29 = String2;
      result = LdrpResValidateFileHandle(String2);
LABEL_107:
      if ( (int)result < 0 )
        return result;
      goto LABEL_111;
    }
    v29 = String2;
LABEL_111:
    v30 = LdrpResMapFile(v29);
    v19 = v30;
    if ( v30 >= 0 )
    {
      v12 = v40;
      v11 = String2;
      if ( (v16 & 0x400) != 0 )
      {
        v31 = 0LL;
        v32 = String2;
      }
      else
      {
        v31 = String2;
        v32 = 0LL;
      }
      result = LdrAddLoadAsDataTable(v40, v32, v36[0], (__int64)v31, 0LL);
      if ( (int)result < 0 )
        return result;
      goto LABEL_44;
    }
    if ( v30 != -1073741302 )
      goto LABEL_29;
    v12 = v40;
    goto LABEL_119;
  }
  v12 = v11;
  if ( (v16 & 0x200) == 0 )
    goto LABEL_63;
  if ( ((unsigned __int8)v11 & 1) == 0 )
    v12 = (wchar_t *)((unsigned __int64)v11 | 1);
  if ( (v16 & 0x1000) == 0 || (result = LdrpResValdiateMappedAddress(v11), (int)result >= 0) )
  {
LABEL_63:
    result = LdrpResGetMappingSize((__int64)v12, v36, v16, 0);
    if ( (int)result >= 0 || (v16 & 0x1000) == 0 )
      goto LABEL_44;
  }
  return result;
}
