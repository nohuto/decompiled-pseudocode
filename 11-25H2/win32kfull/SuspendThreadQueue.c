/*
 * XREFs of SuspendThreadQueue @ 0x1401AD580
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     DelQEntry @ 0x140066E80 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140067260 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxReceiverDied @ 0x14016F18C (xxxReceiverDied.c)
 *     UnlinkSendListSms @ 0x14016F354 (UnlinkSendListSms.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1401AD7F8 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 */

void __fastcall SuspendThreadQueue(__int64 a1)
{
  _QWORD *v2; // rsi
  __int64 *v3; // rbx
  __int64 *v4; // rbp
  __int64 *v5; // rbx
  __int64 *v6; // rbp
  __int64 v7; // rcx
  _QWORD *v8; // r14
  _QWORD *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _BYTE v21[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 0x1000000) != 0
    && (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 1) == 0 )
  {
    v2 = *(_QWORD **)(a1 + 472);
    v3 = (__int64 *)v2[3];
    if ( v3 )
    {
      do
      {
        v4 = (__int64 *)*v3;
        if ( *((_DWORD *)v3 + 24) == 9
          && v3 != (__int64 *)v2[11]
          && v3 != (__int64 *)v2[10]
          && (*((_DWORD *)v3 + 25) & 0x100) == 0 )
        {
          v10 = *((unsigned int *)v3 + 6);
          if ( (unsigned int)v10 < 0x400 && (MessageTable[v10] & 0x1C00) == 0 )
          {
            CleanEventMessage((struct tagQMSG *)v3);
            DelQEntry((__int64)(v2 + 3), v3, 1);
          }
        }
        v3 = v4;
      }
      while ( v4 );
    }
    v5 = *(__int64 **)(a1 + 848);
    if ( v5 )
    {
      do
      {
        v6 = (__int64 *)*v5;
        if ( v5 != (__int64 *)v2[11] && v5 != (__int64 *)v2[10] && (*((_DWORD *)v5 + 25) & 0x100) == 0 )
        {
          v7 = *((unsigned int *)v5 + 6);
          if ( (unsigned int)v7 < 0x400 && (MessageTable[v7] & 0x1C00) == 0 )
          {
            CleanInputMessage(v7, (struct tagQMSG *)v5);
            DelQEntry(a1 + 848, v5, 1);
          }
        }
        v5 = v6;
      }
      while ( v6 );
    }
    v8 = (_QWORD *)(a1 + 560);
    v9 = *(_QWORD **)(a1 + 560);
    if ( v9 != (_QWORD *)(a1 + 560) )
    {
      do
      {
        v11 = (__int64)(v9 - 2);
        v12 = v9;
        v9 = (_QWORD *)*v9;
        if ( !*(_QWORD *)(v11 + 64) )
        {
          v13 = *(_DWORD *)(v11 + 84);
          if ( (v13 & 0x4000) == 0 )
          {
            v14 = *(_QWORD *)(v11 + 32);
            if ( v14 )
            {
              if ( !PsGetProcessCommonJob(**(_QWORD **)(a1 + 464), **(_QWORD **)(v14 + 464)) )
              {
                AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v21);
                xxxReceiverDied(v11, v16, v17, v18);
                AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v21);
              }
            }
            else if ( (v13 & 8) != 0 )
            {
              v15 = *(unsigned int *)(v11 + 104);
              if ( (unsigned int)v15 < 0x400 && (MessageTable[v15] & 0x1C00) == 0 )
              {
                --*(_DWORD *)(a1 + 576);
                v19 = *v12;
                if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v20 = (_QWORD *)v12[1], (_QWORD *)*v20 != v12) )
                  __fastfail(3u);
                *v20 = v19;
                *(_QWORD *)(v19 + 8) = v20;
                *v12 = 0LL;
                if ( (_QWORD *)*v8 == v8 )
                {
                  _InterlockedAnd(
                    (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 488LL) + 8LL),
                    0xFFFFFFBF);
                  _InterlockedAnd(
                    (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 488LL) + 4LL),
                    0xFFFFFFBF);
                }
                UnlinkSendListSms((__int64 *)v11, (__int64)v12);
              }
            }
          }
        }
      }
      while ( v9 != v8 );
    }
  }
}
