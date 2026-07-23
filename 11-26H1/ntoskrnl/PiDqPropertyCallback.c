/*
 * XREFs of PiDqPropertyCallback @ 0x14095D540
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     PiDqOpenObjectRegKey @ 0x140952ACC (PiDqOpenObjectRegKey.c)
 *     PiDqGetPnpObjectType @ 0x14095D760 (PiDqGetPnpObjectType.c)
 *     PiDqPnPGetObjectProperty @ 0x14095D7B0 (PiDqPnPGetObjectProperty.c)
 */

__int64 __fastcall PiDqPropertyCallback(__int64 *a1, __int64 a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  int v5; // ebp
  __int64 v6; // r12
  __int64 i; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  const wchar_t *v14; // rcx
  _QWORD *v15; // r8
  const wchar_t *v16; // rdx
  __int64 result; // rax
  int v18; // ecx
  int v19; // edi
  unsigned int PnpObjectType; // eax
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx

  v5 = 0;
  LODWORD(v6) = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 6); i = (unsigned int)(i + 1) )
  {
    v12 = 48 * i + a1[2];
    if ( *(_DWORD *)(a2 + 16) == *(_DWORD *)(v12 + 16) )
    {
      v13 = *(_QWORD *)a2 - *(_QWORD *)v12;
      if ( *(_QWORD *)a2 == *(_QWORD *)v12 )
        v13 = *(_QWORD *)(a2 + 8) - *(_QWORD *)(v12 + 8);
      if ( !v13 && *(_DWORD *)(a2 + 20) == *(_DWORD *)(v12 + 20) )
      {
        v14 = *(const wchar_t **)(a2 + 24);
        v15 = a1 + 2;
        v16 = *(const wchar_t **)(v12 + 24);
        if ( v14 == v16 )
          goto LABEL_9;
        if ( v14 && v16 && !wcsicmp(v14, v16) )
        {
          v15 = a1 + 2;
LABEL_9:
          *a3 = *(_DWORD *)(48 * i + a1[2] + 32);
          *a4 = *(_DWORD *)(*v15 + 48 * i + 36);
          *a5 = *(_QWORD *)(*v15 + 48 * i + 40);
          return 0LL;
        }
      }
    }
  }
  v18 = *(_DWORD *)(a2 + 20);
  if ( v18 )
  {
    if ( v18 != 1 )
      return 3221225485LL;
    v19 = 0;
    if ( !*a1 )
    {
      PnpObjectType = PiDqGetPnpObjectType(*(unsigned int *)(*(_QWORD *)(a1[5] + 24) + 16LL));
      v5 = PiDqOpenObjectRegKey(1, a1[4], PnpObjectType, 1LL, 0, v21, a1);
      if ( v5 == -1073741772 )
      {
        v5 = 0;
        *a1 = -1LL;
      }
    }
    v6 = *a1;
    if ( *a1 == -1 )
    {
      v22 = a1[2];
      v23 = 6LL * *((unsigned int *)a1 + 6);
      *(_OWORD *)(v22 + 8 * v23) = *(_OWORD *)a2;
      *(_OWORD *)(v22 + 8 * v23 + 16) = *(_OWORD *)(a2 + 16);
      ++*((_DWORD *)a1 + 6);
      *a3 = 0;
      *a4 = 0;
      *a5 = 0LL;
      return (unsigned int)v5;
    }
    if ( v5 < 0 )
      return (unsigned int)v5;
  }
  else
  {
    v19 = PiDqGetPnpObjectType(*(unsigned int *)(*(_QWORD *)(a1[5] + 24) + 16LL));
  }
  result = PiDqPnPGetObjectProperty(
             a1[4],
             v19,
             v6,
             a2,
             *(_DWORD *)(a2 + 20),
             0LL,
             a1[2] + 48LL * *((unsigned int *)a1 + 6));
  if ( (_DWORD)result == -1073741811 )
  {
    result = 0LL;
    *a3 = 0;
    *a4 = 0;
    *a5 = 0LL;
  }
  else if ( (int)result >= 0 )
  {
    *a3 = *(_DWORD *)(a1[2] + 48LL * *((unsigned int *)a1 + 6) + 32);
    *a4 = *(_DWORD *)(a1[2] + 48LL * *((unsigned int *)a1 + 6) + 36);
    *a5 = *(_QWORD *)(a1[2] + 48LL * *((unsigned int *)a1 + 6) + 40);
    result = (unsigned int)result;
    ++*((_DWORD *)a1 + 6);
  }
  return result;
}
