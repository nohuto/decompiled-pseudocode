/*
 * XREFs of ClientImmLoadLayout @ 0x140218CDC
 * Callers:
 *     ?xxxImmLoadLayout@@YAPEAUtagIMEINFOEX@@PEAUHKL__@@@Z @ 0x140282CD0 (-xxxImmLoadLayout@@YAPEAUtagIMEINFOEX@@PEAUHKL__@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall ClientImmLoadLayout(__int64 a1, _OWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // esi
  __int64 v7; // rcx
  void *v8; // rbx
  _OWORD *v9; // rax
  __int64 v10; // rcx
  int v12; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-1A0h] BYREF
  void *Src; // [rsp+40h] [rbp-198h] BYREF
  _QWORD v15[4]; // [rsp+48h] [rbp-190h] BYREF
  _BYTE v16[360]; // [rsp+68h] [rbp-170h] BYREF

  Src = 0LL;
  v12 = 0;
  v15[0] = a1;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v13);
  EtwTraceBeginCallback(92LL);
  v3 = KeUserModeCallback(92LL, v15, 8LL, &Src, &v12);
  EtwTraceEndCallback(92LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v13);
  if ( v3 >= 0 && v12 == 24 )
  {
    v13 = 0LL;
    RtlCopyFromUser(&v13, Src, 8uLL);
    v6 = v13;
    v15[1] = v13;
    if ( !v13 )
      return v6;
    v7 = *((_QWORD *)PtiCurrent(v5, v4) + 69);
    if ( !v7 || (*(_DWORD *)(v7 + 84) & 1) == 0 || *(_OWORD **)(v7 + 96) != a2 )
    {
      v8 = (void *)*((_QWORD *)Src + 2);
      memset_0(v16, 0, 0x160uLL);
      RtlCopyFromUser(v16, v8, 0x160uLL);
      v9 = v16;
      v10 = 2LL;
      do
      {
        *a2 = *v9;
        a2[1] = v9[1];
        a2[2] = v9[2];
        a2[3] = v9[3];
        a2[4] = v9[4];
        a2[5] = v9[5];
        a2[6] = v9[6];
        a2 += 8;
        *(a2 - 1) = v9[7];
        v9 += 8;
        --v10;
      }
      while ( v10 );
      *a2 = *v9;
      a2[1] = v9[1];
      a2[2] = v9[2];
      a2[3] = v9[3];
      a2[4] = v9[4];
      a2[5] = v9[5];
      return v6;
    }
  }
  return 0LL;
}
