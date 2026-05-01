/*
 * XREFs of CrmRegistrationCreateActivity @ 0x180033DFC
 * Callers:
 *     CrmRegistrationStartWithActivity @ 0x18006BAAC (CrmRegistrationStartWithActivity.c)
 * Callees:
 *     CrmActivityDereference @ 0x180020BC8 (CrmActivityDereference.c)
 *     CrmRegistrationAddActivity @ 0x180034C10 (CrmRegistrationAddActivity.c)
 *     CempLockInitialize @ 0x180034D44 (CempLockInitialize.c)
 *     CrmActivityStart @ 0x180034D80 (CrmActivityStart.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall CrmRegistrationCreateActivity(__int64 a1, int a2, int a3, _QWORD *a4)
{
  char *Heap; // rax
  unsigned int v9; // edi
  char *v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  int v13; // esi

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x178uLL);
  v9 = 0;
  v10 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x178uLL);
    *((_QWORD *)v10 + 5) = -1LL;
    CempLockInitialize(v10 + 80);
    v11 = 3LL;
    *((_QWORD *)v10 + 6) = a1;
    *((_DWORD *)v10 + 46) = 3;
    *((_QWORD *)v10 + 2) = 1LL;
    v12 = v10 + 272;
    *((_DWORD *)v10 + 31) = 4;
    *((_QWORD *)v10 + 21) = -1LL;
    *((_QWORD *)v10 + 22) = -1LL;
    *((_QWORD *)v10 + 27) = -1LL;
    do
    {
      *(v12 - 3) = -1LL;
      *v12++ = -1LL;
      --v11;
    }
    while ( v11 );
    v13 = CrmActivityStart((int)v10, a1, a2, a3, (void *)(a1 + 72));
    if ( v13 < 0 )
    {
      CrmActivityDereference((volatile signed __int64 *)v10);
      return (unsigned int)v13;
    }
    else
    {
      if ( a4 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)v10 + 2) <= 1 )
          __fastfail(0xEu);
        *a4 = v10;
      }
      CrmRegistrationAddActivity(a1, v10);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v9;
}
