/*
 * XREFs of ?ndisMergeRSSv2DirectOidResults@@YAXPEAU_NDIS_RSS_SET_INDIRECTION_ENTRIES@@KPEAU_PROCESSOR_NUMBER@@U2@K11PEAH@Z @ 0x1400AF864
 * Callers:
 *     ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1400AF300 (-ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU.c)
 * Callees:
 *     WPP_RECORDER_SF_dddDL @ 0x1400B14A0 (WPP_RECORDER_SF_dddDL.c)
 */

void __fastcall ndisMergeRSSv2DirectOidResults(
        struct _NDIS_RSS_SET_INDIRECTION_ENTRIES *a1,
        unsigned int a2,
        struct _PROCESSOR_NUMBER *a3,
        struct _PROCESSOR_NUMBER a4,
        unsigned int a5,
        struct _PROCESSOR_NUMBER *a6,
        struct _PROCESSOR_NUMBER *a7,
        int *a8)
{
  unsigned int v8; // r13d
  char *v9; // rbp
  struct _PROCESSOR_NUMBER *v11; // r9
  unsigned int v12; // r10d
  unsigned __int16 v13; // si
  char v14; // cl
  int v15; // r12d
  int v16; // edi
  int v17; // r8d
  unsigned int v18; // r15d
  int v19; // [rsp+20h] [rbp-68h]

  v8 = *((_DWORD *)a1 + 4);
  v9 = (char *)a1 + *((unsigned int *)a1 + 3);
  v11 = a3;
  v12 = a2;
  v13 = 0;
  if ( v8 )
  {
    v14 = 0;
    do
    {
      v15 = *(_DWORD *)&v9[24 * v13 + 20];
      v16 = *(_DWORD *)&v9[24 * v13 + 8];
      v17 = *(unsigned __int16 *)&v9[24 * v13 + 12];
      if ( v15 )
      {
        v18 = *(unsigned __int16 *)&v9[24 * v13 + 12];
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_dddDL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (unsigned int)&WPP_RECORDER_INITIALIZED,
            v17,
            (_DWORD)v11,
            v19,
            *(_DWORD *)&v9[24 * v13 + 4],
            v14,
            v17,
            v16,
            *(_DWORD *)&v9[24 * v13 + 20]);
          v11 = a3;
          LOWORD(v17) = v18;
          v12 = a2;
        }
        if ( (v16 & 2) != 0 )
        {
          *a7 = a4;
        }
        else if ( (v16 & 1) != 0 )
        {
          __debugbreak();
        }
        else
        {
          a6[(unsigned __int16)v17] = v11[v18 % v12];
        }
        if ( !*a8 )
          *a8 = v15;
      }
      else if ( (v16 & 3) == 1 )
      {
        __debugbreak();
      }
      v14 = ++v13;
    }
    while ( v13 < v8 );
  }
}
