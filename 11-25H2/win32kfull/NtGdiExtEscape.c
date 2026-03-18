/*
 * XREFs of NtGdiExtEscape @ 0x140167C30
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B13EC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x140146FEC (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z @ 0x1401D3608 (-GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GreIsUMPD@@YA_NPEAUHDC__@@@Z @ 0x1401F31EC (-GreIsUMPD@@YA_NPEAUHDC__@@@Z.c)
 *     ?UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z @ 0x14022EA14 (-UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z.c)
 *     GreNamedEscape @ 0x140263B94 (GreNamedEscape.c)
 *     ?GreScalingDispatchEscape@@YAJPEAUtagGDISCALE_ESCAPE_ARGUMENT@@@Z @ 0x140332868 (-GreScalingDispatchEscape@@YAJPEAUtagGDISCALE_ESCAPE_ARGUMENT@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtGdiExtEscape(
        HDC a1,
        const void *a2,
        int a3,
        unsigned int a4,
        int a5,
        struct tagUMFD_WINLOGON_ESCAPE_ARGUMENT *a6,
        int a7,
        char *a8)
{
  unsigned int v8; // r12d
  char *v9; // rdi
  struct tagUMFD_WINLOGON_ESCAPE_ARGUMENT *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  HANDLE v14; // r13
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  ULONG64 v20; // rdx
  char *v21; // r14
  __int64 SessionState; // rax
  unsigned int v23; // eax
  int v24; // [rsp+44h] [rbp-354h]
  int v25; // [rsp+48h] [rbp-350h]
  wchar_t *Str1; // [rsp+78h] [rbp-320h]
  __int64 v31; // [rsp+90h] [rbp-308h] BYREF
  __int128 v32; // [rsp+98h] [rbp-300h]
  __int64 v33; // [rsp+A8h] [rbp-2F0h]
  __int64 v34; // [rsp+B0h] [rbp-2E8h] BYREF
  __int128 v35; // [rsp+B8h] [rbp-2E0h]
  __int64 v36; // [rsp+C8h] [rbp-2D0h]
  _BYTE v37[48]; // [rsp+D0h] [rbp-2C8h] BYREF
  char v38; // [rsp+100h] [rbp-298h] BYREF
  char v39; // [rsp+120h] [rbp-278h] BYREF
  _WORD v40[264]; // [rsp+140h] [rbp-258h] BYREF

  Str1 = 0LL;
  v8 = -1;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v25 = 0;
  v24 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( a5 >= 0 && a7 >= 0 && a3 >= 0 && (!a1 || !a2) )
  {
    v14 = *(HANDLE *)(W32GetUserSessionState(0LL, a2) + 63544);
    if ( v14 && v14 == PsGetCurrentProcessId() )
    {
      UmfdDispatchWinLogonEscape(a6);
      return 0LL;
    }
    if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost(v12, v11, v13) )
    {
      UmfdDispatchEscape(a6, v16, v17);
      return 0LL;
    }
    v19 = (int)a2;
    if ( !a2 )
    {
LABEL_18:
      if ( Str1 && !_wcsicmp(Str1, L"GSESC") && (int)GreScalingDispatchEscape(a6) >= 0 )
        return 0LL;
      if ( !a5 )
      {
LABEL_35:
        if ( a7 )
        {
          if ( GreIsUMPD(a1) )
          {
            v21 = a8;
            ProbeForWrite(a8, a7, 1u);
            v9 = a8;
            goto LABEL_46;
          }
          if ( a7 > 32 )
          {
            if ( a7 <= 40960000 )
              v9 = (char *)PALLOCNOZ(a7, 1886221383LL);
            if ( !v9 )
              goto LABEL_67;
            v24 = 1;
          }
          else
          {
            v9 = &v39;
          }
          memset_0(v9, 0, a7);
        }
        v21 = a8;
LABEL_46:
        if ( v25 && v10 )
          PushThreadGuardedObject(&v31, v10, Win32FreePool, v18);
        if ( v24 && v9 )
          PushThreadGuardedObject(&v34, v9, Win32FreePool, v18);
        SessionState = W32GetSessionState(v19, v16);
        EUDCCountRegion::EUDCCountRegion(
          (EUDCCountRegion *)v37,
          (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
        if ( Str1 )
          v23 = GreNamedEscape(Str1, a4, a5, v10, a7, v9);
        else
          v23 = GreExtEscape(a1, a4, (unsigned int)a5, v10);
        v8 = v23;
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v37);
        if ( v25 && v10 )
          PopThreadGuardedObject(&v31);
        if ( v24 && v9 )
          PopThreadGuardedObject(&v34);
        if ( a7 && v9 != v21 )
        {
          if ( (unsigned __int64)&v21[a7] > MmUserProbeAddress || &v21[a7] <= v21 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v21, v9, a7);
        }
        goto LABEL_67;
      }
      if ( GreIsUMPD(a1) )
      {
        if ( a5 > 32 )
        {
          v19 = (_DWORD)a6 + a5;
          v10 = a6;
          goto LABEL_35;
        }
      }
      else if ( a5 > 32 )
      {
        if ( a5 <= 40960000 )
          v10 = (struct tagUMFD_WINLOGON_ESCAPE_ARGUMENT *)PALLOCNOZ(a5, 1886221383LL);
        if ( !v10 )
          goto LABEL_67;
        v25 = 1;
        goto LABEL_31;
      }
      v10 = (struct tagUMFD_WINLOGON_ESCAPE_ARGUMENT *)&v38;
LABEL_31:
      if ( (struct tagUMFD_WINLOGON_ESCAPE_ARGUMENT *)((char *)a6 + a5) < a6
        || (unsigned __int64)a6 + a5 > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v10, a6, a5);
      goto LABEL_35;
    }
    if ( a3 <= 260 )
    {
      Str1 = v40;
      v20 = (ULONG64)a2 + 2 * a3;
      if ( v20 < (unsigned __int64)a2 || v20 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v40, a2, 2LL * a3);
      v40[a3] = 0;
      goto LABEL_18;
    }
  }
LABEL_67:
  if ( v24 && v9 )
    Win32FreePool(v9);
  if ( v25 )
  {
    if ( v10 )
      Win32FreePool(v10);
  }
  return v8;
}
