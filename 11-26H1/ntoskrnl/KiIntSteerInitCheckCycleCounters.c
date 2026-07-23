/*
 * XREFs of KiIntSteerInitCheckCycleCounters @ 0x140CD1E54
 * Callers:
 *     KiIntSteerDetermineSteeringEnabled @ 0x140CD1C54 (KiIntSteerDetermineSteeringEnabled.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 */

__int64 KiIntSteerInitCheckCycleCounters()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rcx
  __int64 result; // rax
  unsigned __int16 *v3[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v4; // [rsp+30h] [rbp-18h]
  int v5; // [rsp+32h] [rbp-16h]
  __int16 v6; // [rsp+36h] [rbp-12h]
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v0 = -1LL;
  v6 = 0;
  v4 = 0;
  v7 = 0;
  v3[1] = *(unsigned __int16 **)((char *)&stru_140FC11F0.116 + 4);
  v3[0] = (unsigned __int16 *)&stru_140FC11F0.WaitRegister.Flags;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v7, v3);
    if ( (_DWORD)result )
      break;
    v1 = *(unsigned int *)(KeGetPrcb(v7) + 68);
    if ( v0 < v1 )
      v1 = v0;
    v0 = v1;
  }
  KiIntSteerSlowestCyclesPerSec = v0;
  return result;
}
