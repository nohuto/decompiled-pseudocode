/*
 * XREFs of WheaPersistBadPageToBcd @ 0x1406D5E6C
 * Callers:
 *     WheapProcessEfiBadMemoryPage @ 0x1406D48FC (WheapProcessEfiBadMemoryPage.c)
 *     WheaAttemptRowOffline @ 0x1406D5AE0 (WheaAttemptRowOffline.c)
 *     EmpRemoveBadS3PageWorker @ 0x14078D7C0 (EmpRemoveBadS3PageWorker.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1408487D0 (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     qsort_s @ 0x1405372E0 (qsort_s.c)
 *     BcdOpenStore @ 0x1407733EC (BcdOpenStore.c)
 *     BcdCreateObject @ 0x140774E00 (BcdCreateObject.c)
 *     WheapCountBadPageExtents @ 0x140848D3C (WheapCountBadPageExtents.c)
 *     WheapIsPageInList @ 0x140848DBC (WheapIsPageInList.c)
 *     BcdCloseStore @ 0x1409D0088 (BcdCloseStore.c)
 *     BcdSetElementData @ 0x1409D30A4 (BcdSetElementData.c)
 *     BcdGetElementData @ 0x1409D4B60 (BcdGetElementData.c)
 *     BcdCloseObject @ 0x1409D4E38 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409D54D8 (BcdOpenObject.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheaPersistBadPageToBcd(__int64 a1)
{
  _QWORD *v1; // rdi
  int v3; // ebx
  void *v4; // rsi
  int ElementData; // eax
  unsigned int v6; // r15d
  int v7; // ebx
  __int64 Pool2; // rax
  __int64 v9; // rdx
  void *v10; // rcx
  unsigned int v11; // ebx
  void *Context; // [rsp+20h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+48h] BYREF
  __int64 v16; // [rsp+90h] [rbp+50h] BYREF
  void *v17; // [rsp+98h] [rbp+58h] BYREF

  v14 = 0LL;
  v16 = 0LL;
  v1 = 0LL;
  v17 = 0LL;
  v3 = BcdOpenStore(a1, 0LL, &v16);
  if ( v3 < 0 )
    goto LABEL_20;
  if ( (int)BcdOpenObject(v16, &GUID_BAD_MEMORY_GROUP, &v17) < 0 )
  {
    v14 = 0x2010000000000001LL;
    v3 = BcdCreateObject(v16, &GUID_BAD_MEMORY_GROUP, &v14, &v17);
    if ( v3 < 0 )
    {
      v4 = v17;
      goto LABEL_18;
    }
  }
  v4 = v17;
  v15 = 0;
  ElementData = BcdGetElementData(v17, 385875978LL, 0LL, &v15);
  v6 = v15;
  if ( ElementData != -1073741789 )
    v6 = 0;
  v7 = ElementData;
  v15 = v6;
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
    if ( (unsigned __int8)WheapIsPageInList(v1, v6 >> 3, a1) )
    {
      v3 = 0;
    }
    else
    {
      v11 = v9 + 1;
      v1[v9] = a1;
      qsort_s(v10, (unsigned int)(v9 + 1), 8uLL, WheapPfnComparisonHelper, 0LL);
      if ( (unsigned int)WheapCountBadPageExtents(v1, v11) <= 0x40 )
      {
        v3 = BcdSetElementData(v4, 385875978LL, v1, v6 + 8, Context);
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
  v3 = BcdGetElementData(v4, 385875978LL, Pool2, &v15);
  if ( v3 >= 0 )
  {
    v6 = v15;
    goto LABEL_12;
  }
LABEL_18:
  if ( v4 )
    BcdCloseObject(v4);
LABEL_20:
  if ( v16 )
    BcdCloseStore(v16);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x61656857u);
  return (unsigned int)v3;
}
