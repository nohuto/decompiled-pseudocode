/*
 * XREFs of WheaPersistBadPageToBcd @ 0x140650F00
 * Callers:
 *     WheapProcessEfiBadMemoryPage @ 0x14064F9F8 (WheapProcessEfiBadMemoryPage.c)
 *     WheaAttemptRowOffline @ 0x140650B80 (WheaAttemptRowOffline.c)
 *     EmpRemoveBadS3PageWorker @ 0x1406FE270 (EmpRemoveBadS3PageWorker.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1407B814C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     qsort_s @ 0x1404FC980 (qsort_s.c)
 *     WheapCountBadPageExtents @ 0x1407B86A8 (WheapCountBadPageExtents.c)
 *     WheapIsPageInList @ 0x1407B8728 (WheapIsPageInList.c)
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 *     BcdOpenStore @ 0x140A24A98 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x140A24B8C (BcdCloseStore.c)
 *     BcdGetElementData @ 0x140A25774 (BcdGetElementData.c)
 *     BcdCreateObject @ 0x140A26248 (BcdCreateObject.c)
 *     BcdCloseObject @ 0x140A27BE8 (BcdCloseObject.c)
 *     BcdSetElementData @ 0x140A94754 (BcdSetElementData.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheaPersistBadPageToBcd(__int64 a1)
{
  _QWORD *v1; // rdi
  int v3; // ebx
  __int64 v4; // rsi
  int ElementData; // eax
  unsigned int v6; // r14d
  int v7; // ebx
  __int64 Pool2; // rax
  __int64 v9; // rbx
  void *v10; // rcx
  unsigned int v11; // ebx
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+48h] BYREF
  __int64 v15; // [rsp+90h] [rbp+50h] BYREF
  __int64 v16; // [rsp+98h] [rbp+58h] BYREF

  v13 = 0LL;
  v15 = 0LL;
  v1 = 0LL;
  v16 = 0LL;
  v3 = BcdOpenStore(a1, 0LL, &v15);
  if ( v3 < 0 )
    goto LABEL_20;
  if ( (int)BcdOpenObject(v15, &GUID_BAD_MEMORY_GROUP, &v16) < 0 )
  {
    v13 = 0x2010000000000001LL;
    v3 = BcdCreateObject(v15, &GUID_BAD_MEMORY_GROUP, &v13, &v16);
    if ( v3 < 0 )
    {
      v4 = v16;
      goto LABEL_18;
    }
  }
  v4 = v16;
  v14 = 0;
  ElementData = BcdGetElementData(v16, 385875978LL, 0LL, &v14);
  v6 = v14;
  if ( ElementData != -1073741789 )
    v6 = 0;
  v7 = ElementData;
  v14 = v6;
  Pool2 = ExAllocatePool2(0x102uLL);
  v1 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v3 = -1073741670;
    goto LABEL_18;
  }
  if ( v7 != -1073741789 )
  {
LABEL_12:
    v9 = v6 >> 3;
    if ( (unsigned __int8)WheapIsPageInList(v1, v9, a1) )
    {
      v3 = 0;
    }
    else
    {
      v1[v9] = a1;
      v11 = v9 + 1;
      qsort_s(v10, v11, 8uLL, WheapPfnComparisonHelper, 0LL);
      if ( (unsigned int)WheapCountBadPageExtents(v1, v11) <= 0x40 )
      {
        v3 = BcdSetElementData(v4, 385875978LL, v1, v6 + 8);
        if ( v3 >= 0 )
          v3 = 0;
      }
      else
      {
        v3 = -1073741823;
      }
    }
    goto LABEL_18;
  }
  v3 = BcdGetElementData(v4, 385875978LL, Pool2, &v14);
  if ( v3 >= 0 )
  {
    v6 = v14;
    goto LABEL_12;
  }
LABEL_18:
  if ( v4 )
    BcdCloseObject(v4);
LABEL_20:
  if ( v15 )
    BcdCloseStore(v15);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x61656857u);
  return (unsigned int)v3;
}
