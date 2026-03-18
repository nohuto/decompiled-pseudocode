/*
 * XREFs of ?GetCurrentValue@CInteractionTracker2@@UEBAMW4ScrollAxis@@@Z @ 0x1801B8060
 * Callers:
 *     <none>
 * Callees:
 *     ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x1801B8228 (-HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CInteractionTracker2::GetCurrentValue(__int64 a1, int a2)
{
  int v3; // edx

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1)
          && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(a1 + 648)) )
        {
          return CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a1 + 648));
        }
        else
        {
          return *(float *)(a1 + 480);
        }
      }
      else
      {
        return 0.0;
      }
    }
    else if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1)
           && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(a1 + 664)) )
    {
      return CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a1 + 664));
    }
    else
    {
      return *(float *)(a1 + 428);
    }
  }
  else if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1)
         && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(a1 + 656)) )
  {
    return CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a1 + 656));
  }
  else
  {
    return *(float *)(a1 + 424);
  }
}
