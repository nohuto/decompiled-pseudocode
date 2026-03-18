/*
 * XREFs of RIMIDEValidateInjectionQpcCount @ 0x1401EA73C
 * Callers:
 *     RIMIDEGetTimeStampDelta @ 0x1401E9B20 (RIMIDEGetTimeStampDelta.c)
 * Callees:
 *     Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline @ 0x1401A988C (Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RIMIDEValidateInjectionQpcCount(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned int v5; // ebx
  bool v9; // si
  unsigned __int64 v10; // rdi

  v5 = 0;
  if ( (!a4 || a1) && (a2 || a1) && !a4 )
  {
    if ( !a2 && a1 && !a5 )
      return 0LL;
    v9 = 1;
    if ( (unsigned int)Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(_DWORD *)(a3 + 24) == 7 )
        v9 = *(_DWORD *)(a3 + 272) == 0;
    }
    v10 = a1 - a2;
    if ( !v10 )
      return 0LL;
    if ( v9 )
    {
      LOBYTE(v5) = v10 <= *(_QWORD *)(a3 + 808);
      return v5;
    }
  }
  return 1LL;
}
