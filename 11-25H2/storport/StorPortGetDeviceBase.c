/*
 * XREFs of StorPortGetDeviceBase @ 0x140073E10
 * Callers:
 *     sub_1401B7240 @ 0x1401B7240 (sub_1401B7240.c)
 * Callees:
 *     sub_140039148 @ 0x140039148 (sub_140039148.c)
 *     sub_140053BCC @ 0x140053BCC (sub_140053BCC.c)
 *     sub_140072CE0 @ 0x140072CE0 (sub_140072CE0.c)
 *     sub_140076188 @ 0x140076188 (sub_140076188.c)
 *     sub_14007B01C @ 0x14007B01C (sub_14007B01C.c)
 *     sub_14008AD50 @ 0x14008AD50 (sub_14008AD50.c)
 */

__int64 __fastcall StorPortGetDeviceBase(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5, char a6)
{
  _BYTE *v6; // rcx
  __int64 v7; // rdi
  int v10; // edx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  __int64 v15; // rax
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rbp
  int v20; // r8d
  const char *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi

  v6 = *(_BYTE **)(a1 - 16);
  v7 = 0LL;
  if ( (v6[248] & 1) == 0 )
  {
    v15 = sub_140039148(v6);
    v19 = v15;
    if ( v15 )
    {
      if ( (int)sub_14007B01C((int)v15 + 360, v16, v17, v18, a5) < 0 )
      {
        if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
          && (HIDWORD(off_140168120->Timer) & 8) != 0
          && BYTE1(off_140168120->Timer) >= 2u )
        {
          v21 = (const char *)&unk_14014C630;
          if ( !a6 )
            v21 = "Memory";
          sub_140076188(off_140168120->AttachedDevice, 29, v20, a4, (__int64)v21);
        }
        return 0LL;
      }
      if ( a6 )
        return 0LL;
      v22 = MmMapIoSpaceEx(0LL, a5, 516LL);
      v23 = v22;
      if ( v22 && (int)sub_14008AD50((int)v19 + 952, a4, v22, a5, a3, *(_QWORD *)(v19 + 8)) < 0 )
        return 0LL;
      return v23;
    }
    return 0LL;
  }
  v11 = sub_140053BCC(v6);
  if ( v11 )
    return sub_140072CE0(v11, v10, v12, v13, a5, a6);
  return v7;
}
