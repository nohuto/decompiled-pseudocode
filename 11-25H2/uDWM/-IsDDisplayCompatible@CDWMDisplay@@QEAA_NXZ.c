/*
 * XREFs of ?IsDDisplayCompatible@CDWMDisplay@@QEAA_NXZ @ 0x1800B4E28
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180077088 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDWMDisplay::IsDDisplayCompatible(CDWMDisplay *this)
{
  char v1; // bl
  char v2; // si
  int *v3; // rax
  int v4; // r8d
  char v5; // di
  char v6; // al
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = 1;
  v2 = 1;
  if ( *((_BYTE *)this + 184) || *((_BYTE *)this + 291) )
  {
    v3 = (int *)((char *)this + 200);
  }
  else
  {
    v3 = (int *)((char *)this + 200);
    if ( *((int *)this + 50) >= 2300 && *((_DWORD *)this + 59) != 24 )
      goto LABEL_8;
  }
  v2 = 0;
LABEL_8:
  v4 = *((_DWORD *)this + 54);
  v5 = 0;
  if ( v4 == 1297040209 && *v3 >= 3100
    || *v3 >= 3200 && (v4 != 4098 || (unsigned int)HIWORD(*((_QWORD *)this + 26)) >= 0x20) )
  {
    v5 = 1;
  }
  v8 = 0;
  (*(void (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 9)
                                                         + 8LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
    L"DisableDDisplay",
    &v8);
  v6 = v5;
  if ( v8 == 1 )
    v6 = 0;
  if ( !v2 || !v6 )
    return 0;
  return v1;
}
