/*
 * XREFs of GetOpRegionScopeWorker @ 0x140047EC0
 * Callers:
 *     GetOpRegionScope @ 0x140047E1C (GetOpRegionScope.c)
 * Callees:
 *     AMLIIterateParentNext @ 0x14001E874 (AMLIIterateParentNext.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIReferenceHandleEx @ 0x140024CAC (AMLIReferenceHandleEx.c)
 *     IsPciDevice @ 0x140047FCC (IsPciDevice.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetOpRegionScopeWorker(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  __int64 v10; // rcx

  v5 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a4 + 6);
  if ( a2 >= 0 )
  {
    while ( 1 )
    {
      v6 = a4[1];
      if ( !v6 )
        break;
      v7 = *((_DWORD *)a4 + 4);
      if ( (v7 & 0x800) == 0 )
      {
        *((_DWORD *)a4 + 4) = v7 | 0x800;
        v8 = IsPciDevice(v6, GetOpRegionScopeWorker, a4, (char *)a4 + 20);
        v5 = v8;
        if ( v8 == 259 )
          return 259LL;
        if ( v8 < 0 )
          goto LABEL_11;
      }
      *((_DWORD *)a4 + 4) &= ~0x800u;
      if ( *((_BYTE *)a4 + 20) )
      {
        *(_QWORD *)a4[6] = a4[1];
        AMLIReferenceHandleEx(*(_QWORD *)a4[6]);
        v5 = 0;
        goto LABEL_11;
      }
      a4[1] = AMLIIterateParentNext(a4[1]);
    }
    v5 = -1073741275;
  }
LABEL_11:
  if ( *((_DWORD *)a4 + 6) )
    ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64))a4[4])(*a4, v5, 0LL, a4[5]);
  if ( *a4 )
  {
    AMLIDereferenceHandleEx(*a4);
    *a4 = 0LL;
  }
  v10 = a4[1];
  if ( v10 )
  {
    AMLIDereferenceHandleEx(v10);
    a4[1] = 0LL;
  }
  ExFreePoolWithTag(a4, 0x46706341u);
  return v5;
}
