/*
 * XREFs of PfpPrefetchRequest @ 0x140980100
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PfPrefetchRequestVerify @ 0x14097F868 (PfPrefetchRequestVerify.c)
 *     PfpPrefetchRequestPerform @ 0x14098034C (PfpPrefetchRequestPerform.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPrefetchRequest(__int64 a1, KPROCESSOR_MODE a2)
{
  unsigned __int64 Pool2; // rbx
  size_t v5; // r8
  void *v6; // rdx
  void *v7; // rcx
  NTSTATUS v8; // edi
  __int64 v9; // rdx
  _DWORD *v10; // r12
  unsigned __int64 v11; // r13
  __int64 v12; // rcx
  unsigned int *v13; // r14
  void *v14; // rdx
  unsigned int ULongFromUser; // ecx
  int v16; // ecx
  int v18; // [rsp+90h] [rbp+8h]
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF
  PVOID P; // [rsp+A8h] [rbp+20h]

  Pool2 = 0LL;
  v18 = 0;
  if ( *(_DWORD *)(a1 + 8) == 5 )
  {
    if ( *(_DWORD *)(a1 + 24) < 0x80u )
    {
      v8 = -1073741306;
    }
    else
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      P = (PVOID)Pool2;
      if ( Pool2 )
      {
        if ( a2 )
          ProbeForRead(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
        v5 = *(unsigned int *)(a1 + 24);
        v6 = *(void **)(a1 + 16);
        if ( a2 )
          RtlCopyFromUser((void *)Pool2, v6, v5);
        else
          RtlCopyVolatileMemory((void *)Pool2, v6, v5);
        if ( (unsigned int)PfPrefetchRequestVerify(Pool2, *(unsigned int *)(a1 + 24)) )
        {
          v8 = -1073741701;
        }
        else
        {
          v7 = *(void **)(Pool2 + 72);
          if ( v7 )
          {
            Object = 0LL;
            v8 = ObReferenceObjectByHandle(v7, 1u, (POBJECT_TYPE)ExEventObjectType, a2, &Object, 0LL);
            *(_QWORD *)(Pool2 + 72) = Object;
            if ( v8 < 0 )
              goto LABEL_29;
            v18 = 1;
          }
          v8 = PfpPrefetchRequestPerform(Pool2);
          v9 = *(unsigned int *)(Pool2 + 40);
          v10 = (_DWORD *)(v9 + Pool2);
          v11 = v9 + Pool2 + 48LL * *(unsigned int *)(Pool2 + 12);
          v12 = *(_QWORD *)(a1 + 16);
          v13 = (unsigned int *)(v9 + v12);
          Object = (PVOID)(v12 + 84);
          if ( a2 )
            ProbeForWrite((volatile void *)v12, *(unsigned int *)(a1 + 24), 8u);
          while ( (unsigned __int64)v10 < v11 )
          {
            if ( a2 )
              ULongFromUser = RtlReadULongFromUser(v13);
            else
              ULongFromUser = *v13;
            if ( (*v10 & 8) != 0 )
              v16 = ULongFromUser | 8;
            else
              v16 = ULongFromUser & 0xFFFFFFF7;
            if ( a2 )
              RtlWriteULongToUser(v13, v16);
            else
              *v13 = v16;
            v10 += 12;
            v13 += 12;
          }
          v14 = (void *)(Pool2 + 84);
          if ( a2 )
            RtlCopyToUser(Object, v14, 0x2CuLL);
          else
            RtlCopyVolatileMemory(Object, v14, 0x2CuLL);
        }
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
  else
  {
    v8 = -1073741821;
  }
LABEL_29:
  if ( v18 )
    ObfDereferenceObject(*(PVOID *)(Pool2 + 72));
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  return (unsigned int)v8;
}
