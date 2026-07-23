/*
 * XREFs of PopMarshalSettingValues @ 0x1409F84C8
 * Callers:
 *     PopDispatchNotificationsToList @ 0x1409F8328 (PopDispatchNotificationsToList.c)
 *     PopGetSettingValue @ 0x1409F8A4C (PopGetSettingValue.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     PopUnreferencePowerSetting @ 0x1409FBE7C (PopUnreferencePowerSetting.c)
 */

__int64 __fastcall PopMarshalSettingValues(__int64 a1, char *a2, __int64 a3, unsigned int *a4)
{
  __int64 v5; // r9
  char PreviousMode; // r12
  unsigned int v7; // ebx
  __int64 Next_high; // r10
  __int64 v9; // rdx
  __int64 v10; // r13
  _DWORD *v11; // rax
  _DWORD *v12; // rcx
  unsigned int v13; // edi
  __int64 i; // rsi
  unsigned int *v15; // r14
  void *v16; // rdx
  unsigned int *v17; // r15
  void *v18; // rcx
  void *v19; // rdx
  size_t v20; // r8
  void *v21; // rdx
  void *v22; // rcx
  void *v23; // rcx
  __int128 *v24; // rbx
  int Src; // [rsp+20h] [rbp-68h] BYREF
  int v27; // [rsp+24h] [rbp-64h]
  unsigned int v28; // [rsp+28h] [rbp-60h]
  unsigned int *v29; // [rsp+30h] [rbp-58h]
  char *v30; // [rsp+38h] [rbp-50h]
  __int128 v31; // [rsp+40h] [rbp-48h] BYREF
  __int64 v32; // [rsp+50h] [rbp-38h]

  v29 = a4;
  v5 = a1;
  Src = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v31 = 0LL;
  v32 = 0LL;
  v7 = 0;
  v28 = 0;
  Next_high = SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  v9 = 0LL;
  v10 = 3LL;
  while ( 1 )
  {
    v27 = v9;
    if ( (unsigned int)v9 >= 3 )
      break;
    if ( (*(_DWORD *)(v5 + 52) & 8) != 0 )
    {
      v12 = *(_DWORD **)(v5 + 8 * Next_high + 64);
      *((_QWORD *)&v31 + v9) = v12;
    }
    else
    {
      v11 = *(_DWORD **)(v5 + 8 * v9 + 64);
      *((_QWORD *)&v31 + v9) = v11;
      v12 = v11;
      if ( (_DWORD)v9 == 2 && !v11 )
      {
        *((_QWORD *)&v31 + v9) = *((_QWORD *)&v31 + 1);
        v12 = (_DWORD *)*((_QWORD *)&v31 + 1);
      }
    }
    v7 += 8;
    v28 = v7;
    if ( v12 )
    {
      ++*v12;
      v7 += v12[1];
      v28 = v7;
    }
    v9 = (unsigned int)(v9 + 1);
  }
  if ( (unsigned int)a3 >= v7 )
  {
    v30 = a2;
    Src = 0;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v27 = i;
      if ( (unsigned int)i >= 3 )
        break;
      v15 = (unsigned int *)*((_QWORD *)&v31 + i);
      if ( v15 )
      {
        v16 = v15 + 2;
        if ( PreviousMode )
          RtlCopyToUser(a2, v16, 4uLL);
        else
          RtlCopyVolatileMemory(a2, v16, 4uLL);
        v17 = v15 + 1;
        v18 = a2 + 4;
        v19 = v15 + 1;
        if ( PreviousMode )
          RtlCopyToUser(v18, v19, 4uLL);
        else
          RtlCopyVolatileMemory(v18, v19, 4uLL);
        Src = *v17;
        v20 = *v17;
        v21 = v15 + 3;
        v22 = a2 + 8;
        if ( PreviousMode )
          RtlCopyToUser(v22, v21, v20);
        else
          RtlCopyVolatileMemory(v22, v21, v20);
      }
      else
      {
        Src = 0;
        if ( PreviousMode )
          RtlCopyToUser(a2, &Src, 4uLL);
        else
          RtlCopyVolatileMemory(a2, &Src, 4uLL);
        v23 = a2 + 4;
        if ( PreviousMode )
          RtlCopyToUser(v23, &Src, 4uLL);
        else
          RtlCopyVolatileMemory(v23, &Src, 4uLL);
      }
      a2 += (unsigned int)(Src + 8);
      v30 = a2;
    }
    if ( PreviousMode )
      RtlWriteULongToUser(v29, v7);
    else
      *v29 = v7;
    v13 = 0;
  }
  else
  {
    v13 = -1073741789;
  }
  v24 = &v31;
  do
  {
    if ( *(_QWORD *)v24 )
      PopUnreferencePowerSetting(*(_QWORD *)v24, v9, a3, v5);
    v24 = (__int128 *)((char *)v24 + 8);
    --v10;
  }
  while ( v10 );
  return v13;
}
