/*
 * XREFs of ?CreateInstance@CKeyboardSensor@@SAJPEAPEAV1@@Z @ 0x140191A3C
 * Callers:
 *     CKeyboardSensor_CreateInstance @ 0x14021A140 (CKeyboardSensor_CreateInstance.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x1401B377C (--0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z.c)
 */

__int64 __fastcall CKeyboardSensor::CreateInstance(struct CKeyboardSensor **a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax

  *a1 = 0LL;
  v2 = Win32AllocPoolZInitImpl(256LL, 0x540uLL, 0x43486970u);
  v3 = v2;
  if ( !v2 )
    return 3221225495LL;
  CBaseInput::CBaseInput(v2, 2LL, 1LL, 1LL);
  *(_QWORD *)(v3 + 1328) = 0LL;
  *(_QWORD *)v3 = &CKeyboardSensor::`vftable';
  result = 0LL;
  *(_DWORD *)(v3 + 1336) = 0;
  *a1 = (struct CKeyboardSensor *)v3;
  return result;
}
