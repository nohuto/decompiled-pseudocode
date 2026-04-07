/*
 * XREFs of ?OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ @ 0x1800C1C40
 * Callers:
 *     <none>
 * Callees:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18003CDE4 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x18009A104 (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     McTemplateU0tttt_EtwEventWriteTransfer @ 0x1800C841C (McTemplateU0tttt_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAppArrangementDelayed::OnAnimationStart(CAppArrangementDelayed *this)
{
  unsigned __int8 v1; // bp
  unsigned __int8 v2; // r12
  char v3; // r15
  __int64 v4; // r14
  unsigned __int8 v6; // di
  __int64 v7; // rdx
  HANDLE PropW; // rax
  unsigned __int8 v9; // dl
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  int v15; // edx

  v1 = 0;
  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  v6 = 1;
  if ( !*((_DWORD *)this + 30) )
    goto LABEL_23;
  v7 = *((_QWORD *)this + 12);
  do
  {
    PropW = GetPropW(*(HWND *)(*(_QWORD *)(v7 + 8 * v4) + 16LL), L"ImmersiveGhostWindowProp");
    v9 = 0;
    if ( !PropW )
      v9 = v6;
    v6 = v9;
    v7 = *((_QWORD *)this + 12);
    v10 = *(_DWORD *)(*(_QWORD *)(v7 + 8 * v4) + 24LL) & 0xFFF;
    if ( v10 <= 0x1E )
    {
      if ( v10 != 30 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 2;
          if ( v12 )
          {
            v13 = v12 - 3;
            if ( v13 )
            {
              v14 = v13 - 15;
              if ( v14 )
              {
                if ( v14 != 2 )
                  goto LABEL_14;
LABEL_12:
                v3 = 1;
              }
            }
          }
        }
      }
LABEL_13:
      v1 = 1;
      v2 = 1;
      goto LABEL_14;
    }
    switch ( v10 )
    {
      case '"':
        goto LABEL_13;
      case '\'':
        goto LABEL_12;
      case '/':
      case 'S':
        goto LABEL_13;
    }
LABEL_14:
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < *((_DWORD *)this + 30) );
  if ( !v1 )
  {
LABEL_23:
    CStoryboard::Abandon(this);
    goto LABEL_24;
  }
  if ( v6 )
    CAnimationScheduler::AbandonTransition(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
      75);
LABEL_24:
  CAnimationScheduler::AbandonTransition(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23), 67);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0tttt_EtwEventWriteTransfer(v2, v15, v1, v6, v2, v3);
  return 0LL;
}
