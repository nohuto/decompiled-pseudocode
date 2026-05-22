/*
 * XREFs of ?Clear@?$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ @ 0x180110430
 * Callers:
 *     ??1SipcServer@@EEAA@XZ @ 0x18010F940 (--1SipcServer@@EEAA@XZ.c)
 *     ?OnDisposePublic@SipcServer@@EEAAXXZ @ 0x1801123E0 (-OnDisposePublic@SipcServer@@EEAAXXZ.c)
 * Callees:
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x18010FA28 (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall NtList<SipcServer::EndpointListEntry>::Clear(SipcServer::EndpointListEntry *a1)
{
  SipcServer::EndpointListEntry *v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = *(SipcServer::EndpointListEntry **)a1;
    if ( *(SipcServer::EndpointListEntry **)(*(_QWORD *)a1 + 8LL) != a1
      || (result = *(_QWORD *)v2, *(SipcServer::EndpointListEntry **)(*(_QWORD *)v2 + 8LL) != v2) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)a1 = result;
    *(_QWORD *)(result + 8) = a1;
    if ( v2 == a1 )
      break;
    if ( v2 )
      SipcServer::EndpointListEntry::`scalar deleting destructor'(v2);
    --*((_DWORD *)a1 + 4);
  }
  return result;
}
