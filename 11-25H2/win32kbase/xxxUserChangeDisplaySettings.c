/*
 * XREFs of xxxUserChangeDisplaySettings @ 0x1400E1A50
 * Callers:
 *     NtUserChangeDisplaySettings @ 0x14016EAB0 (NtUserChangeDisplaySettings.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x140002CF8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$07@@U3@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333333@Z @ 0x140002EF4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400A038C (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E2330 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     DrvDxgkWriteDiagEntry @ 0x1400E2600 (DrvDxgkWriteDiagEntry.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E26C4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettings(
        _OWORD *a1,
        void *a2,
        struct tagDESKTOP *a3,
        unsigned int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  struct tagDESKTOP *v7; // r15
  __int64 v9; // rbx
  struct _UNICODE_STRING *v10; // r14
  ULONG_PTR v11; // rsi
  unsigned __int16 v12; // dx
  __int64 v13; // rdi
  unsigned int v14; // ebx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v16; // rax
  const void *v17; // rdx
  __int64 v18; // rdi
  struct tagTHREADINFO *v19; // rax
  struct tagTHREADINFO *v20; // rax
  void *v22; // rbx
  unsigned int v23; // r15d
  __int64 v24; // rax
  PWSTR Buffer; // r8
  __int64 v26; // rdi
  int v27; // ecx
  int v28; // eax
  WCHAR *v29; // rdx
  __int64 v30; // rcx
  WCHAR v31; // ax
  WCHAR *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rsi
  unsigned int v35; // r8d
  _BOOL8 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r9
  unsigned __int16 v39; // [rsp+70h] [rbp-E8h]
  void *v40; // [rsp+78h] [rbp-E0h] BYREF
  char v41[4]; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int16 v42; // [rsp+84h] [rbp-D4h]
  unsigned int v43; // [rsp+88h] [rbp-D0h] BYREF
  unsigned int v44; // [rsp+8Ch] [rbp-CCh] BYREF
  int v45; // [rsp+90h] [rbp-C8h] BYREF
  _OWORD *v46; // [rsp+98h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-B8h] BYREF
  ULONG_PTR v48[2]; // [rsp+A8h] [rbp-B0h] BYREF
  void (__fastcall *v49)(char *); // [rsp+B8h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+C0h] [rbp-98h] BYREF
  void (__fastcall *v51)(char *); // [rsp+D0h] [rbp-88h]
  int v52; // [rsp+D8h] [rbp-80h] BYREF
  void *v53; // [rsp+E0h] [rbp-78h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v54; // [rsp+E8h] [rbp-70h] BYREF
  struct tagDESKTOP *v55; // [rsp+F0h] [rbp-68h] BYREF
  void *Src[2]; // [rsp+F8h] [rbp-60h]
  GUID ActivityId; // [rsp+108h] [rbp-50h] BYREF

  v43 = a4;
  v7 = a3;
  v55 = a3;
  v46 = a1;
  v40 = a2;
  v53 = a5;
  v54 = a7;
  ActivityId = 0LL;
  v9 = MEMORY[0xFFFFF78000000320];
  v47 = v9 * KeQueryTimeIncrement();
  v10 = 0LL;
  v11 = 0LL;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(BugCheckParameter2);
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v48);
  if ( v46 )
  {
    *(_OWORD *)Src = *a1;
    v13 = LOWORD(Src[0]);
    v10 = (struct _UNICODE_STRING *)Win32AllocPoolWithQuotaZInitImpl(
                                      MmUserProbeAddress,
                                      LOWORD(Src[0]) + 18LL,
                                      0x73726447u);
    v14 = -1;
    if ( !v10 )
      goto LABEL_24;
    if ( v51 != (void (__fastcall *)(char *))-1LL )
    {
      BugCheckParameter4 = PtiCurrent();
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v10, (ULONG_PTR)BugCheckParameter4);
    }
    v16 = PtiCurrent();
    BugCheckParameter2[0] = *((_QWORD *)v16 + 48);
    *((_QWORD *)v16 + 48) = BugCheckParameter2;
    BugCheckParameter2[1] = (ULONG_PTR)v10;
    v51 = GreDeleteFastMutex;
    v10->Buffer = &v10[1].Length;
    v10->Length = v13;
    v10->MaximumLength = v13 + 2;
    v12 = 0;
    if ( (_WORD)v13 )
    {
      v17 = Src[1];
      if ( (char *)Src[1] + v13 > (void *)MmUserProbeAddress || (char *)Src[1] + v13 < Src[1] )
      {
        v17 = Src[1];
        LOWORD(v13) = Src[0];
      }
      memmove(v10->Buffer, v17, (unsigned __int16)v13);
      v12 = 0;
    }
    v10->Buffer[(unsigned __int64)(unsigned __int16)v13 >> 1] = 0;
    v7 = v55;
  }
  else
  {
    v14 = -1;
  }
  if ( v40 )
  {
    v42 = v12;
    if ( ((unsigned __int8)v40 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v39 = *((_WORD *)v40 + 34);
    v18 = *((unsigned __int16 *)v40 + 35);
    v42 = *((_WORD *)v40 + 35);
    if ( (unsigned __int16)(v39 - 188) > 0x20u )
    {
      v14 = -2;
    }
    else
    {
      v11 = Win32AllocPoolWithQuotaZInitImpl(188LL, v18 + 220, 0x73726447u);
      if ( v11 )
      {
        if ( v49 != (void (__fastcall *)(char *))-1LL )
        {
          v19 = PtiCurrent();
          KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)v48, v11, (ULONG_PTR)v19);
        }
        v20 = PtiCurrent();
        v48[0] = *((_QWORD *)v20 + 48);
        *((_QWORD *)v20 + 48) = v48;
        v48[1] = v11;
        v49 = GreDeleteFastMutex;
        if ( (_DWORD)v18 + v39 && ((unsigned __int8)v40 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        memmove((void *)v11, v40, v39);
        memmove((void *)(v11 + 220), (char *)v40 + v39, v42);
        *(_WORD *)(v11 + 68) = 220;
        *(_WORD *)(v11 + 70) = v42;
        goto LABEL_25;
      }
    }
LABEL_24:
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v48);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
    return v14;
  }
LABEL_25:
  v22 = v53;
  v23 = xxxUserChangeDisplaySettingsInternal(v10, (struct _devicemodeW *)v11, v7, v43, v53, a6, v54);
  v24 = Win32AllocPoolZInitImpl(256LL, 0x90uLL, 0x64437355u);
  v26 = v24;
  if ( v24 )
  {
    *(_DWORD *)v24 = 4;
    *(_DWORD *)(v24 + 4) = 144;
    *(_DWORD *)(v24 + 40) = 0;
    *(_QWORD *)(v24 + 32) = 0LL;
    *(_QWORD *)(v24 + 8) = 0LL;
    *(_OWORD *)(v24 + 16) = 0LL;
    *(_QWORD *)(v24 + 56) = v47;
    if ( !v40 || (v27 = 1, !v11) )
      v27 = 0;
    *(_DWORD *)(v24 + 140) = v27 | *(_DWORD *)(v24 + 140) & 0xFFFFFFFE;
    if ( !v46 || !v10 || !v10->Length || (v28 = 2, !v10->Buffer) )
      v28 = 0;
    v29 = (WCHAR *)((v22 == 0LL ? 8 : 0) | (a6 == KernelMode ? 4 : 0) | v28 & 0xFFFFFFF3 | *(_DWORD *)(v26 + 140) & 0xFFFFFFF1);
    *(_DWORD *)(v26 + 140) = (_DWORD)v29;
    *(_DWORD *)(v26 + 48) = v43;
    *(_DWORD *)(v26 + 52) = v23;
    if ( ((unsigned __int8)v29 & 2) != 0 )
    {
      v29 = (WCHAR *)(v26 + 108);
      Buffer = v10->Buffer;
      v30 = 16LL;
      do
      {
        if ( v30 == -2147483630 )
          break;
        v31 = *Buffer;
        if ( !*Buffer )
          break;
        ++Buffer;
        *v29++ = v31;
        --v30;
      }
      while ( v30 );
      v32 = v29 - 1;
      if ( v30 )
        v32 = v29;
      *v32 = 0;
      if ( !v30 )
        *(_WORD *)(v26 + 108) = 0;
    }
    if ( (*(_DWORD *)(v26 + 140) & 1) != 0 && *(_WORD *)(v11 + 68) >= 0xB4u )
    {
      *(_DWORD *)(v26 + 64) = *(_DWORD *)(v11 + 72);
      *(_QWORD *)(v26 + 68) = *(_QWORD *)(v11 + 76);
      *(_DWORD *)(v26 + 76) = *(_DWORD *)(v11 + 168);
      *(_DWORD *)(v26 + 80) = *(_DWORD *)(v11 + 172);
      *(_DWORD *)(v26 + 84) = *(_DWORD *)(v11 + 176);
      *(_DWORD *)(v26 + 88) = *(_DWORD *)(v11 + 184);
      *(_DWORD *)(v26 + 92) = *(unsigned __int16 *)(v11 + 70);
      *(_DWORD *)(v26 + 96) = *(_DWORD *)(v11 + 84);
      *(_DWORD *)(v26 + 100) = *(_DWORD *)(v11 + 88);
      *(_DWORD *)(v26 + 104) = *(_DWORD *)(v11 + 180);
    }
    DrvDxgkWriteDiagEntry(v26, v29, Buffer, 0LL);
    v33 = MEMORY[0xFFFFF78000000320];
    v34 = v33 * KeQueryTimeIncrement();
    EtwActivityIdControl(3u, &ActivityId);
    v35 = dword_14029EDE8;
    if ( (unsigned int)dword_14029EDE8 > 5 && tlgKeywordOn((__int64)&dword_14029EDE8, 0x200000000004LL) )
    {
      v41[0] = a6;
      v46 = (_OWORD *)v34;
      v44 = v23;
      v36 = v40 == 0LL;
      v45 = v40 == 0LL;
      v40 = (void *)(v26 + 108);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v36,
        (__int64)&unk_1402782F0,
        (__int64)&ActivityId,
        0LL,
        (const WCHAR **)&v40,
        (__int64)&v45,
        (__int64)&v43,
        (__int64)&v44,
        (__int64)&v47,
        (__int64)&v46,
        (__int64)v41);
      v35 = dword_14029EDE8;
    }
    if ( (*(_DWORD *)(v26 + 140) & 1) != 0 && v35 > 5 && tlgKeywordOn((__int64)&dword_14029EDE8, 0x200000000004LL) )
    {
      v45 = *(_DWORD *)(v26 + 104);
      v44 = *(_DWORD *)(v26 + 100);
      v43 = *(_DWORD *)(v26 + 96);
      v52 = *(_DWORD *)(v26 + 92);
      LODWORD(v53) = *(_DWORD *)(v26 + 88);
      LODWORD(v54) = *(_DWORD *)(v26 + 84);
      LODWORD(v55) = *(_DWORD *)(v26 + 80);
      LODWORD(v47) = *(_DWORD *)(v26 + 72);
      LODWORD(v46) = *(_DWORD *)(v26 + 68);
      LODWORD(v40) = *(_DWORD *)(v26 + 64);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v37,
        (__int64)&unk_140278263,
        (__int64)&ActivityId,
        v38,
        (__int64)&v40,
        (__int64)&v46,
        (__int64)&v47,
        (__int64)&v55,
        (__int64)&v54,
        (__int64)&v53,
        (__int64)&v52,
        (__int64)&v43,
        (__int64)&v44,
        (__int64)&v45);
    }
    GreDeleteFastMutex((char *)v26);
  }
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v48);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  return v23;
}
