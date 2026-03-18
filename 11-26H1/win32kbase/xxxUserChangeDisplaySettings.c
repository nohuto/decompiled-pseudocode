/*
 * XREFs of xxxUserChangeDisplaySettings @ 0x140138F20
 * Callers:
 *     NtUserChangeDisplaySettings @ 0x1401E21D0 (NtUserChangeDisplaySettings.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x140004578 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$07@@U3@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333333@Z @ 0x14000466C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400D0658 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400FB7B4 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     DrvDxgkWriteDiagEntry @ 0x14014FFD0 (DrvDxgkWriteDiagEntry.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D0C98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettings(
        _OWORD *a1,
        volatile void *a2,
        struct tagDESKTOP *a3,
        unsigned int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v8; // rbx
  struct _UNICODE_STRING *v9; // r14
  ULONG_PTR v10; // rsi
  int v11; // edx
  __int64 v12; // r13
  SIZE_T v13; // r15
  USHORT v14; // r12
  SIZE_T v15; // rdi
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v21; // rax
  size_t v22; // rdi
  size_t v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct tagTHREADINFO *v26; // rax
  struct tagTHREADINFO *v27; // rax
  unsigned int v29; // r12d
  __int64 v30; // rax
  __int64 v31; // rdi
  int v32; // ecx
  int v33; // eax
  unsigned int v34; // edx
  bool v35; // cf
  int v36; // edx
  PWSTR Buffer; // rdx
  WCHAR *v38; // rcx
  WCHAR v39; // ax
  WCHAR *v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // r9
  __int64 v45; // r8
  bool v46; // al
  _BOOL8 v47; // rcx
  __int64 v48; // rcx
  char v49[4]; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v50; // [rsp+74h] [rbp-F4h] BYREF
  volatile void *v51; // [rsp+78h] [rbp-F0h] BYREF
  unsigned __int16 v52; // [rsp+80h] [rbp-E8h]
  __int16 v53; // [rsp+84h] [rbp-E4h]
  unsigned int v54; // [rsp+88h] [rbp-E0h] BYREF
  int v55; // [rsp+8Ch] [rbp-DCh] BYREF
  void *v56; // [rsp+90h] [rbp-D8h] BYREF
  volatile void *Address; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-C8h] BYREF
  ULONG_PTR v59[2]; // [rsp+A8h] [rbp-C0h] BYREF
  void (__fastcall *v60)(char *, __int64, __int64, __int64); // [rsp+B8h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+C0h] [rbp-A8h] BYREF
  void (__fastcall *v62)(char *, __int64, __int64, __int64); // [rsp+D0h] [rbp-98h]
  int v63; // [rsp+D8h] [rbp-90h] BYREF
  struct tagDESKTOP *v64; // [rsp+E0h] [rbp-88h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v65[3]; // [rsp+E8h] [rbp-80h] BYREF
  volatile void *v66[2]; // [rsp+100h] [rbp-68h]
  GUID ActivityId; // [rsp+110h] [rbp-58h] BYREF

  v50 = a4;
  v64 = a3;
  Address = a1;
  v51 = a2;
  v56 = a5;
  v65[0] = a7;
  ActivityId = 0LL;
  v8 = MEMORY[0xFFFFF78000000320];
  v58 = v8 * KeQueryTimeIncrement();
  v9 = 0LL;
  v10 = 0LL;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)v59);
  if ( Address )
  {
    v12 = (unsigned int)(v11 + 16);
    v13 = (unsigned int)(v11 + 1);
    v65[1] = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v13;
    ProbeForRead(Address, v13, v11 + 1);
    *(_OWORD *)v66 = *a1;
    v14 = (USHORT)v66[0];
    v15 = LOWORD(v66[0]);
    v9 = (struct _UNICODE_STRING *)Win32AllocPoolWithQuotaZInitImpl(v16, LOWORD(v66[0]) + 18LL, 0x73726447u);
    v19 = -1;
    if ( !v9 )
      goto LABEL_16;
    if ( v62 != (void (__fastcall *)(char *, __int64, __int64, __int64))-1LL )
    {
      BugCheckParameter4 = PtiCurrent(v18, v17);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4);
    }
    v21 = PtiCurrent(v18, v17);
    BugCheckParameter2[0] = *((_QWORD *)v21 + 47);
    *((_QWORD *)v21 + 47) = BugCheckParameter2;
    BugCheckParameter2[1] = (ULONG_PTR)v9;
    v62 = GreDeleteFastMutex;
    v9->Buffer = &v9[1].Length;
    v9->Length = v14;
    v9->MaximumLength = v14 + 2;
    LOWORD(v11) = 0;
    if ( v14 )
    {
      ProbeForRead(v66[1], v15, v13);
      memmove(v9->Buffer, (const void *)v66[1], v15);
      LOWORD(v11) = 0;
    }
    v9->Buffer[v15 >> 1] = 0;
  }
  else
  {
    v12 = 16LL;
    v13 = 1LL;
    v19 = -1;
  }
  if ( v51 )
  {
    v52 = v11;
    v53 = v11;
    v65[2] = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v13;
    ProbeForRead(v51, v13, 4u);
    v52 = *((_WORD *)v51 + 34);
    v22 = v52;
    v23 = *((unsigned __int16 *)v51 + 35);
    v53 = *((_WORD *)v51 + 35);
    if ( (unsigned __int16)(v52 - 188) > 0x20u )
    {
      v19 = -2;
    }
    else
    {
      v10 = Win32AllocPoolWithQuotaZInitImpl(188, v23 + 220, 0x73726447u);
      if ( v10 )
      {
        if ( v60 != (void (__fastcall *)(char *, __int64, __int64, __int64))-1LL )
        {
          v26 = PtiCurrent(v25, v24);
          KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)v59, v10, (ULONG_PTR)v26);
        }
        v27 = PtiCurrent(v25, v24);
        v59[0] = *((_QWORD *)v27 + 47);
        *((_QWORD *)v27 + 47) = v59;
        v59[1] = v10;
        v60 = GreDeleteFastMutex;
        ProbeForRead(v51, (unsigned int)(v22 + v23), 4u);
        memmove((void *)v10, (const void *)v51, v22);
        memmove((void *)(v10 + 220), (char *)v51 + v22, v23);
        *(_WORD *)(v10 + 68) = 220;
        *(_WORD *)(v10 + 70) = v23;
        goto LABEL_17;
      }
    }
LABEL_16:
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v59);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
    return v19;
  }
LABEL_17:
  v29 = xxxUserChangeDisplaySettingsInternal(v9, (struct _devicemodeW *)v10, v64, v50, v56, a6, v65[0]);
  v30 = Win32AllocPoolZInitImpl(256LL, 0x90uLL, 0x64437355u);
  v31 = v30;
  if ( v30 )
  {
    *(_DWORD *)v30 = 4;
    *(_DWORD *)(v30 + 4) = 144;
    *(_DWORD *)(v30 + 40) = 0;
    *(_QWORD *)(v30 + 32) = 0LL;
    *(_QWORD *)(v30 + 8) = 0LL;
    *(_OWORD *)(v30 + 16) = 0LL;
    *(_QWORD *)(v30 + 56) = v58;
    if ( !v51 || (v32 = v13, !v10) )
      v32 = 0;
    *(_DWORD *)(v30 + 140) = v32 | *(_DWORD *)(v30 + 140) & 0xFFFFFFFE;
    if ( !Address || !v9 || !v9->Length || (v33 = 2, !v9->Buffer) )
      v33 = 0;
    v34 = (a6 == KernelMode ? 4 : 0) | v33 & 0xFFFFFFF3 | *(_DWORD *)(v31 + 140) & 0xFFFFFFF1;
    v35 = v56 != 0LL;
    v56 = (void *)-(__int64)v56;
    v36 = (v35 ? 0 : 8) | v34;
    *(_DWORD *)(v31 + 140) = v36;
    *(_DWORD *)(v31 + 48) = v50;
    *(_DWORD *)(v31 + 52) = v29;
    if ( (v36 & 2) != 0 )
    {
      Buffer = v9->Buffer;
      v38 = (WCHAR *)(v31 + 108);
      do
      {
        if ( v12 == -2147483630 )
          break;
        v39 = *Buffer;
        if ( !*Buffer )
          break;
        ++Buffer;
        *v38++ = v39;
        v12 -= v13;
      }
      while ( v12 );
      v40 = v38 - 1;
      if ( v12 )
        v40 = v38;
      *v40 = 0;
      if ( !v12 )
        *(_WORD *)(v31 + 108) = 0;
    }
    if ( ((unsigned __int8)*(_DWORD *)(v31 + 140) & (unsigned __int8)v13) != 0 && *(_WORD *)(v10 + 68) >= 0xB4u )
    {
      *(_DWORD *)(v31 + 64) = *(_DWORD *)(v10 + 72);
      *(_QWORD *)(v31 + 68) = *(_QWORD *)(v10 + 76);
      *(_DWORD *)(v31 + 76) = *(_DWORD *)(v10 + 168);
      *(_DWORD *)(v31 + 80) = *(_DWORD *)(v10 + 172);
      *(_DWORD *)(v31 + 84) = *(_DWORD *)(v10 + 176);
      *(_DWORD *)(v31 + 88) = *(_DWORD *)(v10 + 184);
      *(_DWORD *)(v31 + 92) = *(unsigned __int16 *)(v10 + 70);
      *(_DWORD *)(v31 + 96) = *(_DWORD *)(v10 + 84);
      *(_DWORD *)(v31 + 100) = *(_DWORD *)(v10 + 88);
      *(_DWORD *)(v31 + 104) = *(_DWORD *)(v10 + 180);
    }
    DrvDxgkWriteDiagEntry(v31);
    v41 = MEMORY[0xFFFFF78000000320];
    v42 = v41 * KeQueryTimeIncrement();
    EtwActivityIdControl(3u, &ActivityId);
    v45 = (unsigned int)dword_1402A9E08;
    if ( (unsigned int)dword_1402A9E08 > 5 )
    {
      v46 = tlgKeywordOn((__int64)&dword_1402A9E08, 0x200000000004LL);
      v44 = 0LL;
      if ( v46 )
      {
        v49[0] = a6;
        Address = (volatile void *)v42;
        v56 = (void *)v58;
        v54 = v29;
        v47 = v51 == 0LL;
        v55 = v51 == 0LL;
        v51 = (volatile void *)(v31 + 108);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
          v47,
          (__int64)&unk_1402824B3,
          (__int64)&ActivityId,
          0LL,
          (const WCHAR **)&v51,
          (__int64)&v55,
          (__int64)&v50,
          (__int64)&v54,
          (__int64)&v56,
          (__int64)&Address,
          (__int64)v49);
        v45 = (unsigned int)dword_1402A9E08;
      }
    }
    if ( ((unsigned __int8)*(_DWORD *)(v31 + 140) & (unsigned __int8)v13) != 0
      && (unsigned int)v45 > 5
      && tlgKeywordOn((__int64)&dword_1402A9E08, 0x200000000004LL) )
    {
      v55 = *(_DWORD *)(v31 + 104);
      v54 = *(_DWORD *)(v31 + 100);
      v50 = *(_DWORD *)(v31 + 96);
      v63 = *(_DWORD *)(v31 + 92);
      LODWORD(v64) = *(_DWORD *)(v31 + 88);
      LODWORD(v65[0]) = *(_DWORD *)(v31 + 84);
      LODWORD(v58) = *(_DWORD *)(v31 + 80);
      LODWORD(v56) = *(_DWORD *)(v31 + 72);
      LODWORD(Address) = *(_DWORD *)(v31 + 68);
      LODWORD(v51) = *(_DWORD *)(v31 + 64);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v48,
        (__int64)&unk_140282426,
        (__int64)&ActivityId,
        v44,
        (__int64)&v51,
        (__int64)&Address,
        (__int64)&v56,
        (__int64)&v58,
        (__int64)v65,
        (__int64)&v64,
        (__int64)&v63,
        (__int64)&v50,
        (__int64)&v54,
        (__int64)&v55);
    }
    GreDeleteFastMutex((char *)v31, v43, v45, v44);
  }
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v59);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  return v29;
}
