/*
 * XREFs of _dynamic_initializer_for__s_knownWaveforms__ @ 0x18000A490
 * Callers:
 *     <none>
 * Callees:
 *     atexit @ 0x18009A4BC (atexit.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??0?$map@GW4WaveformFlags@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGW4WaveformFlags@@@std@@@3@@std@@QEAA@V?$initializer_list@U?$pair@$$CBGW4WaveformFlags@@@std@@@1@@Z @ 0x18019DCCC (--0-$map@GW4WaveformFlags@@U-$less@G@std@@V-$allocator@U-$pair@$$CBGW4WaveformFlags@@@std@@@3@@s.c)
 */

int dynamic_initializer_for__s_knownWaveforms__()
{
  _QWORD v1[2]; // [rsp+20h] [rbp-79h] BYREF
  __int16 v2; // [rsp+30h] [rbp-69h] BYREF
  int v3; // [rsp+34h] [rbp-65h]
  __int16 v4; // [rsp+38h] [rbp-61h]
  int v5; // [rsp+3Ch] [rbp-5Dh]
  __int16 v6; // [rsp+40h] [rbp-59h]
  int v7; // [rsp+44h] [rbp-55h]
  __int16 v8; // [rsp+48h] [rbp-51h]
  int v9; // [rsp+4Ch] [rbp-4Dh]
  __int16 v10; // [rsp+50h] [rbp-49h]
  int v11; // [rsp+54h] [rbp-45h]
  __int16 v12; // [rsp+58h] [rbp-41h]
  int v13; // [rsp+5Ch] [rbp-3Dh]
  __int16 v14; // [rsp+60h] [rbp-39h]
  int v15; // [rsp+64h] [rbp-35h]
  __int16 v16; // [rsp+68h] [rbp-31h]
  int v17; // [rsp+6Ch] [rbp-2Dh]
  __int16 v18; // [rsp+70h] [rbp-29h]
  int v19; // [rsp+74h] [rbp-25h]
  __int16 v20; // [rsp+78h] [rbp-21h]
  int v21; // [rsp+7Ch] [rbp-1Dh]
  __int16 v22; // [rsp+80h] [rbp-19h]
  int v23; // [rsp+84h] [rbp-15h]
  __int16 v24; // [rsp+88h] [rbp-11h]
  int v25; // [rsp+8Ch] [rbp-Dh]
  __int16 v26; // [rsp+90h] [rbp-9h]
  int v27; // [rsp+94h] [rbp-5h]
  __int16 v28; // [rsp+98h] [rbp-1h]
  int v29; // [rsp+9Ch] [rbp+3h]
  __int16 v30; // [rsp+A0h] [rbp+7h]
  int v31; // [rsp+A4h] [rbp+Bh]
  __int16 v32; // [rsp+A8h] [rbp+Fh]
  int v33; // [rsp+ACh] [rbp+13h]
  __int16 v34; // [rsp+B0h] [rbp+17h]
  int v35; // [rsp+B4h] [rbp+1Bh]
  __int16 v36; // [rsp+B8h] [rbp+1Fh]
  int v37; // [rsp+BCh] [rbp+23h]
  __int16 v38; // [rsp+C0h] [rbp+27h]
  int v39; // [rsp+C4h] [rbp+2Bh]
  __int16 v40; // [rsp+C8h] [rbp+2Fh]
  int v41; // [rsp+CCh] [rbp+33h]
  __int16 v42; // [rsp+D0h] [rbp+37h]
  int v43; // [rsp+D4h] [rbp+3Bh]
  char v44; // [rsp+D8h] [rbp+3Fh] BYREF

  v2 = 4097;
  v3 = 8;
  v4 = 4098;
  v6 = 4099;
  v8 = 4100;
  v10 = 4101;
  v12 = 4102;
  v14 = 4103;
  v16 = 4104;
  v18 = 4105;
  v20 = 4106;
  v22 = 4107;
  v24 = 4108;
  v26 = 4109;
  v28 = 4110;
  v30 = 4111;
  v32 = 4112;
  v34 = 4113;
  v36 = 4114;
  v38 = 4115;
  v40 = 4116;
  v42 = 4117;
  v1[0] = &v2;
  v5 = 8;
  v7 = 0;
  v13 = 0;
  v15 = 0;
  v17 = 0;
  v19 = 0;
  v21 = 0;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  v43 = 0;
  v1[1] = &v44;
  v9 = 4;
  v11 = 4;
  v23 = 4;
  v25 = 4;
  v27 = 4;
  v29 = 4;
  v31 = 4;
  v33 = 4;
  v35 = 4;
  std::map<unsigned short,enum WaveformFlags>::map<unsigned short,enum WaveformFlags>(4LL, v1);
  return atexit(dynamic_atexit_destructor_for__s_knownWaveforms__);
}
