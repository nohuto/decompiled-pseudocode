/*
 * XREFs of ?NtUserfnHkINLPMSG@@YA_JHK_KREAUtagMSG@@@Z @ 0x14003D874
 * Callers:
 *     NtUserCallNextHookEx @ 0x14003D690 (NtUserCallNextHookEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x14003D278 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 */

__int64 __fastcall NtUserfnHkINLPMSG(__int64 a1, unsigned int a2, __int64 a3, struct tagMSG *volatile a4)
{
  int v6; // ebx
  struct tagMSG *volatile v7; // r8
  __int64 result; // rax
  __int64 v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h]
  __int128 v11; // [rsp+50h] [rbp-18h]

  v6 = a1;
  *(_OWORD *)v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v7 = (struct tagMSG *volatile)MmUserProbeAddress;
  if ( (unsigned __int64)a4 < MmUserProbeAddress )
    v7 = a4;
  *(_OWORD *)v9 = *(_OWORD *)v7;
  v10 = *((_OWORD *)v7 + 1);
  v11 = *((_OWORD *)v7 + 2);
  if ( (_DWORD)a1 == 3 && (LODWORD(v9[1]) == 576 || LODWORD(v9[1]) == 281) )
  {
    *((_QWORD *)&v10 + 1) = *((_QWORD *)PtiCurrent(a1) + 91);
    *(_QWORD *)&v10 = *((_QWORD *)PtiCurrent(*((__int64 *)&v10 + 1)) + 92);
  }
  result = xxxCallNextHookEx(a2, a3, (__int64)v9);
  if ( v6 == 3 )
  {
    *(_OWORD *)a4 = *(_OWORD *)v9;
    *((_OWORD *)a4 + 1) = v10;
    *((_OWORD *)a4 + 2) = v11;
  }
  return result;
}
