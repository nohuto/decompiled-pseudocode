/*
 * XREFs of ?ndisPreProcessOid@@YAEPEAXPEAU_NDIS_OID_REQUEST@@IPEAH@Z @ 0x140027010
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140086480 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140026840 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140056520 (-ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisPreProcessOid(_DWORD *a1, struct _NDIS_OID_REQUEST *a2, int a3, int *a4)
{
  unsigned __int8 v4; // si
  int v5; // ebx
  unsigned int v10; // r8d
  unsigned int v11; // eax
  _DWORD *v12; // rcx
  NDIS_OID Oid; // r10d
  unsigned int v14; // r9d
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  UCHAR *v17; // r8
  __int64 (__fastcall *v18)(__int128 *, __int64, UCHAR *); // rax
  int v19; // edx
  int v20; // r8d
  int v21; // r9d
  __int64 result; // rax
  UINT Timeout; // eax
  unsigned int v24; // ecx
  __int128 v25; // [rsp+20h] [rbp-48h] BYREF
  __int128 v26; // [rsp+30h] [rbp-38h]
  __int128 v27; // [rsp+40h] [rbp-28h]

  v4 = 0;
  v5 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( a3 == 17 )
  {
    Timeout = a2->Timeout;
    if ( Timeout < 0x3C )
    {
      v24 = a1[94];
      if ( v24 )
        *((_WORD *)a1 + 911) = (v24 + Timeout - 1) / v24;
    }
  }
  *(_DWORD *)&a2->NdisReserved[16] &= ~4u;
  v10 = 0;
  v11 = 73;
  if ( *(_BYTE *)a1 == 17 )
    v12 = a1;
  else
    v12 = (_DWORD *)*((_QWORD *)a1 + 4);
  if ( !a2->PortNumber || (v12[468] & 0x200) == 0 )
  {
    Oid = a2->DATA.QUERY_INFORMATION.Oid;
    v14 = 146;
    while ( v11 <= v14 && v11 >= v10 )
    {
      if ( *((_DWORD *)&unk_1400F4080 + 6 * v11) > Oid )
      {
        if ( !v11 )
          break;
        v14 = v11 - 1;
        v11 = v10 + ((v11 - v10) >> 1);
      }
      else
      {
        if ( *((_DWORD *)&unk_1400F4080 + 6 * v11) == Oid )
        {
          *(_DWORD *)&a2->NdisReserved[20] = v11;
          v15 = *(unsigned int *)&a2->NdisReserved[16];
          *(_DWORD *)&a2->NdisReserved[16] |= 4u;
          if ( a3 == 17 )
          {
            *(_QWORD *)&v25 = a1;
          }
          else
          {
            v16 = (_DWORD *)v26;
            if ( a3 == 5 )
              v16 = a1;
            *(_QWORD *)&v26 = v16;
          }
          *(_QWORD *)&v27 = a2;
          v17 = &a2->NdisReserved[32];
          if ( (v15 & 0x220) != 0 )
            *((_QWORD *)&v26 + 1) = *(_QWORD *)v17;
          else
            *((_QWORD *)&v26 + 1) = 0LL;
          if ( (v15 & 0x40) != 0 )
            *((_QWORD *)&v25 + 1) = *(_QWORD *)v17;
          else
            *((_QWORD *)&v25 + 1) = 0LL;
          DWORD2(v27) = 0;
          if ( (v15 & 0x840080) == 0 )
          {
            v18 = (__int64 (__fastcall *)(__int128 *, __int64, UCHAR *))*(&funcs_140024A90 + 3 * v11);
            if ( v18 )
            {
              v4 = v18(&v25, v15, v17);
              if ( v4 == 1 )
              {
                HIDWORD(v27) |= 4u;
                ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v25, v19, v20, v21);
                v5 = 259;
              }
              else
              {
                v5 = DWORD2(v27);
              }
            }
          }
          break;
        }
        v10 = v11 + 1;
        v11 += 1 + ((v14 - v11) >> 1);
      }
    }
  }
  result = v4;
  *a4 = v5;
  return result;
}
