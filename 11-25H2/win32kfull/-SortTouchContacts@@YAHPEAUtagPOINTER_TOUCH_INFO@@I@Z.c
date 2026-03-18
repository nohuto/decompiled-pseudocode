/*
 * XREFs of ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x14020FA24
 * Callers:
 *     xxxInjectTouchInput @ 0x14023D0FC (xxxInjectTouchInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall SortTouchContacts(struct tagPOINTER_TOUCH_INFO *a1, __int64 a2)
{
  unsigned int v2; // edi
  bool v4; // bl
  bool v5; // si
  __int64 v6; // rax
  int v7; // edx
  int v8; // r8d
  __int64 v9; // r9
  unsigned int v10; // r8d
  unsigned int v11; // edx
  int v12; // r10d
  __int128 *v13; // r9
  __int64 v14; // r14
  int v15; // r12d
  __int64 v16; // rbx
  char *v17; // rsi
  _OWORD *v18; // rdx
  __int128 v19; // xmm0
  __int64 v20; // rcx
  _OWORD *v21; // rdx
  __int64 i; // rdx
  int v23; // esi
  bool v24; // di
  __int64 UserSessionState; // rax
  __int16 v27; // [rsp+30h] [rbp-D8h]
  char v28; // [rsp+40h] [rbp-C8h]
  __int128 v29; // [rsp+50h] [rbp-B8h]
  __int128 v30; // [rsp+60h] [rbp-A8h]
  __int128 v31; // [rsp+70h] [rbp-98h]
  __int128 v32; // [rsp+80h] [rbp-88h]
  __int128 v33; // [rsp+90h] [rbp-78h]
  __int128 v34; // [rsp+A0h] [rbp-68h]
  __int128 v35; // [rsp+B0h] [rbp-58h]
  __int128 v36; // [rsp+C0h] [rbp-48h]
  __int128 v37; // [rsp+D0h] [rbp-38h]

  v2 = a2;
  if ( (_DWORD)a2 )
  {
    v4 = 1;
    v10 = 1;
    v11 = (unsigned int)a2 / 9;
    if ( v2 / 9 <= 1 )
      goto LABEL_40;
    do
      v10 = 3 * v10 + 1;
    while ( v10 < v11 );
    if ( v10 )
    {
LABEL_40:
      do
      {
        if ( v10 < v2 )
        {
          v12 = 0;
          v13 = (__int128 *)((char *)a1 + 144 * v10);
          do
          {
            v14 = v12;
            v15 = v12;
            v29 = *v13;
            v30 = v13[1];
            v31 = v13[2];
            v32 = v13[3];
            v33 = v13[4];
            v34 = v13[5];
            v35 = v13[6];
            v36 = v13[7];
            v37 = v13[8];
            if ( v12 >= 0 )
            {
              v16 = v12 + v10;
              v17 = (char *)a1 + 144 * v12;
              do
              {
                if ( *((_DWORD *)v17 + 1) <= DWORD1(v29) )
                  break;
                v15 -= v10;
                v18 = (_OWORD *)((char *)a1 + 144 * v16);
                v16 = (unsigned int)v16 - v10;
                *v18 = *(_OWORD *)v17;
                v18[1] = *((_OWORD *)v17 + 1);
                v18[2] = *((_OWORD *)v17 + 2);
                v18[3] = *((_OWORD *)v17 + 3);
                v18[4] = *((_OWORD *)v17 + 4);
                v18[5] = *((_OWORD *)v17 + 5);
                v18[6] = *((_OWORD *)v17 + 6);
                v18[7] = *((_OWORD *)v17 + 7);
                v19 = *((_OWORD *)v17 + 8);
                v17 -= 144 * (int)v10;
                v14 -= (int)v10;
                v18[8] = v19;
              }
              while ( v14 >= 0 );
              v4 = 1;
            }
            v20 = v15 + v10;
            if ( v12 + v10 != (_DWORD)v20 )
            {
              v21 = (_OWORD *)((char *)a1 + 144 * v20);
              *v21 = v29;
              v21[1] = v30;
              v21[2] = v31;
              v21[3] = v32;
              v21[4] = v33;
              v21[5] = v34;
              v21[6] = v35;
              v21[7] = v36;
              v21[8] = v37;
            }
            ++v12;
            v13 += 9;
          }
          while ( v12 + v10 < v2 );
        }
        v10 /= 3u;
      }
      while ( v10 );
    }
    for ( i = 1LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v2 )
        return 1LL;
      v23 = *((_DWORD *)a1 + 36 * (unsigned int)i + 1);
      if ( v23 == *((_DWORD *)a1 + 36 * (unsigned int)(i - 1) + 1) )
        break;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v4 = 0;
    }
    v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, i);
      v28 = v23;
      LOBYTE(v8) = v24;
      v9 = *(_QWORD *)(UserSessionState + 69160);
      v27 = 18;
      goto LABEL_35;
    }
  }
  else
  {
    v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v6 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      v28 = 0;
      LOBYTE(v8) = v5;
      v9 = *(_QWORD *)(v6 + 69160);
      v27 = 17;
LABEL_35:
      LOBYTE(v7) = v4;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v7,
        v8,
        v9,
        2,
        20,
        v27,
        (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids,
        v28);
    }
  }
  return 0LL;
}
