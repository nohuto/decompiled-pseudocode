/*
 * XREFs of InputHapticsTrigger @ 0x14021BBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     Feature_MouseHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14021B4D4 (Feature_MouseHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall InputHapticsTrigger(int a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  __int64 UserSessionState; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 result; // rax
  bool v15; // zf
  _OWORD v16[9]; // [rsp+20h] [rbp-39h] BYREF

  memset((char *)v16 + 4, 0, 0x84uLL);
  LODWORD(v16[0]) = a1;
  UserSessionState = W32GetUserSessionState(v3, v2, v4);
  v6 = *(_OWORD *)(UserSessionState + 18584);
  v16[5] = *(_OWORD *)(UserSessionState + 18568);
  v7 = *(_OWORD *)(UserSessionState + 18600);
  v16[6] = v6;
  *(_QWORD *)&v6 = *(_QWORD *)(UserSessionState + 18616);
  v16[7] = v7;
  *(_QWORD *)&v16[8] = v6;
  v10 = PtiCurrent(v9, v8);
  v11 = *(_OWORD *)((char *)v10 + 1400);
  *(_OWORD *)((char *)v16 + 8) = *(_OWORD *)((char *)v10 + 1384);
  v12 = *(_OWORD *)((char *)v10 + 1416);
  *(_OWORD *)((char *)&v16[1] + 8) = v11;
  v13 = *(_OWORD *)((char *)v10 + 1432);
  *(_OWORD *)((char *)&v16[2] + 8) = v12;
  *(_QWORD *)&v12 = *((_QWORD *)v10 + 181);
  result = *((unsigned int *)v10 + 360);
  *((_QWORD *)&v16[4] + 1) = v12;
  *(_OWORD *)((char *)&v16[3] + 8) = v13;
  if ( (_DWORD)result == 2 )
  {
    result = Feature_MouseHaptics__private_IsEnabledDeviceUsageNoInline();
    if ( !(_DWORD)result )
      return result;
    v15 = DWORD2(v16[7]) == 0;
  }
  else if ( (_DWORD)result == 8 )
  {
    v15 = LODWORD(v16[5]) == 0;
  }
  else
  {
    result = (unsigned int)(result - 16);
    if ( (result & 0xFFFFFFFD) != 0 )
      return result;
    v15 = DWORD2(v16[6]) == 0;
  }
  if ( !v15 )
    return SendMessageTo(22, (int)v16, 136);
  return result;
}
