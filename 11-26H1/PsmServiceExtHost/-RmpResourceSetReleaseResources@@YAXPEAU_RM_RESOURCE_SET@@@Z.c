/*
 * XREFs of ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18002CE94
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x18002C994 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 * Callees:
 *     CempListEntryRemoveAndClear @ 0x180013890 (CempListEntryRemoveAndClear.c)
 *     ?RmpResourceSetDisassociateFromWrappedSet@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18002D008 (-RmpResourceSetDisassociateFromWrappedSet@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 */

void __fastcall RmpResourceSetReleaseResources(struct _RM_RESOURCE_SET *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdi
  struct _RM_RESOURCE_SET *i; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h]

  v2 = (_QWORD *)((char *)a1 + 56);
  if ( *v2 && v2[1] )
    CempListEntryRemoveAndClear(v2);
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 6) + 1320LL) + 48LL);
  RmpResourceSetDisassociateFromWrappedSet(a1);
  RtlAcquireSRWLockExclusive(v3 + 664);
  v5 = *((_QWORD *)a1 + 1) & (-1LL << (*(_DWORD *)(v3 + 652) & 0x1F));
  for ( i = (struct _RM_RESOURCE_SET *)(*(_QWORD *)(v3 + 656)
                                      + 8LL
                                      * (((*(_DWORD *)(v3 + 652) >> 5) - 1) & (HIBYTE(v5)
                                                                             - 877075889
                                                                             + 442596621 * (unsigned __int8)v5
                                                                             + 37
                                                                             * (BYTE6(v5)
                                                                              + 37
                                                                              * (BYTE5(v5)
                                                                               + 37
                                                                               * (BYTE4(v5)
                                                                                + 37
                                                                                * (BYTE3(v5)
                                                                                 + 37
                                                                                 * (BYTE2(v5)
                                                                                  + 37 * (unsigned int)BYTE1(v5)))))))));
        (*(_QWORD *)i & 1) == 0;
        i = *(struct _RM_RESOURCE_SET **)i )
  {
    if ( *(struct _RM_RESOURCE_SET **)i == a1 )
    {
      *(_QWORD *)i = *(_QWORD *)a1;
      --*(_DWORD *)(v3 + 648);
      *(_QWORD *)a1 |= 0x8000000000000002uLL;
      break;
    }
  }
  *((_DWORD *)a1 + 6) |= 0x80000000;
  RtlReleaseSRWLockExclusive(v3 + 664);
  RmpObjectRelease((char *)a1);
}
