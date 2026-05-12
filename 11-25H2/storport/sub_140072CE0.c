/*
 * XREFs of sub_140072CE0 @ 0x140072CE0
 * Callers:
 *     StorPortGetDeviceBase @ 0x140073E10 (StorPortGetDeviceBase.c)
 *     sub_1400EC5DC @ 0x1400EC5DC (sub_1400EC5DC.c)
 * Callees:
 *     sub_140076188 @ 0x140076188 (sub_140076188.c)
 *     sub_14007B01C @ 0x14007B01C (sub_14007B01C.c)
 *     sub_14008AD50 @ 0x14008AD50 (sub_14008AD50.c)
 */

__int64 __fastcall sub_140072CE0(__int64 a1, int a2, int a3, int a4, unsigned int a5, char a6)
{
  int v9; // r8d
  const char *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi

  if ( (int)sub_14007B01C((unsigned int)*(_QWORD *)(a1 + 584) + 88, a2, a3, a4, a5) < 0 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 8) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      v10 = (const char *)&unk_14014C630;
      if ( !a6 )
        v10 = "Memory";
      sub_140076188(off_140168120->AttachedDevice, 28, v9, a4, (__int64)v10);
    }
    return 0LL;
  }
  if ( a6 )
    return 0LL;
  v11 = MmMapIoSpaceEx(0LL, a5, 516LL);
  v12 = v11;
  if ( v11 && (int)sub_14008AD50((int)a1 + 1400, a4, v11, a5, a3, *(_QWORD *)(a1 + 8)) < 0 )
    return 0LL;
  return v12;
}
