/*
 * XREFs of ?_OnKeyDown@CDragVisual@@AEAAX_K@Z @ 0x18052082C
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180521CB8 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x18051FED0 (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 *     ?_OnMovePlacement@CDragVisual@@AEAAXW4PlaceModeKey@@@Z @ 0x180520D4C (-_OnMovePlacement@CDragVisual@@AEAAXW4PlaceModeKey@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDragVisual::_OnKeyDown(CDragVisual *this, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v9; // rdx

  if ( !*((_BYTE *)this + 324) && !*((_BYTE *)this + 325) && !*((_DWORD *)this + 82) )
  {
    v3 = a2 - 13;
    if ( !v3 )
      goto LABEL_21;
    v4 = v3 - 14;
    if ( !v4 )
    {
      CDragVisual::_CancelPlacement(this);
      return;
    }
    v5 = v4 - 5;
    if ( v5 )
    {
      v6 = v5 - 5;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 != 1 )
              return;
            v9 = 3LL;
          }
          else
          {
            v9 = 2LL;
          }
        }
        else
        {
          v9 = 1LL;
        }
      }
      else
      {
        v9 = 0LL;
      }
      CDragVisual::_OnMovePlacement(this, v9);
      CDragVisual::_ClearVisualFeedback(this);
      *((_BYTE *)this + 326) = 1;
    }
    else
    {
LABEL_21:
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 32LL))(*((_QWORD *)this + 17)) )
      {
        CDragVisual::_ClearVisualFeedback(this);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 40LL))(*((_QWORD *)this + 17));
      }
    }
  }
}
