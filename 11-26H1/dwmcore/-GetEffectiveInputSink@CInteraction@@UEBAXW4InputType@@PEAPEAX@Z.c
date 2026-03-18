/*
 * XREFs of ?GetEffectiveInputSink@CInteraction@@UEBAXW4InputType@@PEAPEAX@Z @ 0x1801BF0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::GetEffectiveInputSink(_QWORD *a1, int a2, _QWORD *a3)
{
  int v3; // edx
  int v4; // edx
  __int64 result; // rax
  int v6; // edx

  v3 = a2 - 2;
  if ( v3 && (v4 = v3 - 1) != 0 )
  {
    v6 = v4 - 1;
    if ( v6 )
    {
      if ( (unsigned int)(v6 - 1) < 2 )
        result = a1[1];
      else
        result = 0LL;
    }
    else
    {
      result = a1[4];
    }
  }
  else
  {
    result = a1[3];
  }
  *a3 = result;
  return result;
}
