/*
 * XREFs of ?GetCurrentValue@CInteractionTracker@@UEBAMW4ScrollAxis@@@Z @ 0x1801B8150
 * Callers:
 *     <none>
 * Callees:
 *     ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x1801B8228 (-HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

double __fastcall CInteractionTracker::GetCurrentValue(__int64 a1, int a2)
{
  int v3; // edx
  double result; // xmm0_8

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1)
          && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(a1 + 416)) )
        {
          *(float *)&result = CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a1 + 416));
        }
        else
        {
          *(_QWORD *)&result = *(unsigned int *)(a1 + 240);
        }
      }
      else
      {
        return 0.0;
      }
    }
    else if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1)
           && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(a1 + 432)) )
    {
      *(float *)&result = CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a1 + 432));
    }
    else
    {
      *(_QWORD *)&result = *(unsigned int *)(a1 + 188);
    }
  }
  else if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1)
         && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(a1 + 424)) )
  {
    *(float *)&result = CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a1 + 424));
  }
  else
  {
    *(_QWORD *)&result = *(unsigned int *)(a1 + 184);
  }
  return result;
}
