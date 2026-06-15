/*
 * XREFs of sub_140044930 @ 0x140044930
 * Callers:
 *     sub_140044864 @ 0x140044864 (sub_140044864.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140013C20 @ 0x140013C20 (sub_140013C20.c)
 *     sub_140044A2C @ 0x140044A2C (sub_140044A2C.c)
 *     sub_140044B54 @ 0x140044B54 (sub_140044B54.c)
 *     sub_140044BB0 @ 0x140044BB0 (sub_140044BB0.c)
 *     sub_140044BC0 @ 0x140044BC0 (sub_140044BC0.c)
 */

__int64 __fastcall sub_140044930(__int64 a1, __int64 a2)
{
  int *v2; // rdi
  HRESULT WorkQueue; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  DWORD v9; // ecx
  int v10; // ecx
  __int64 v12; // [rsp+20h] [rbp-38h]
  _BYTE v13[40]; // [rsp+30h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  DWORD taskId; // [rsp+60h] [rbp+8h] BYREF
  char v16; // [rsp+70h] [rbp+18h] BYREF

  v2 = (int *)(a1 + 16);
  WorkQueue = RtwqAllocateWorkQueue(RTWQ_MULTITHREADED_WORKQUEUE, (DWORD *)(a1 + 16));
  v6 = WorkQueue;
  if ( WorkQueue >= 0 )
  {
    v7 = sub_140044BB0(&v16, a1);
    sub_140044BC0(v13, v7);
    v8 = sub_140044A2C(a1, a2);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v9 = *v2;
      taskId = 0;
      RtwqGetWorkQueueMMCSSTaskId(v9, &taskId);
      if ( (byte_1400E8401 & 8) != 0 )
      {
        LODWORD(v12) = taskId;
        sub_140013C20(v10, (int)&unk_1400C8230, a1, *v2, v12);
      }
      v13[8] = 0;
      v6 = 0;
    }
    else
    {
      sub_14000C2A8((int)retaddr, 253, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", v8);
    }
    sub_140044B54(v13);
  }
  else
  {
    sub_14000C2A8((int)retaddr, 246, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", WorkQueue);
  }
  return v6;
}
