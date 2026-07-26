/*
 * XREFs of ?ndisOidPreRSSCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140035610
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x140023270 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 __fastcall ndisOidPreRSSCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  unsigned __int8 v4; // si
  __int64 v5; // r14
  int v6; // eax
  _DWORD *v7; // rbx
  unsigned int v9; // esi
  unsigned __int64 v10; // rax

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = 0;
  v5 = *((_QWORD *)a1 + 3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x87u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      v5,
      v3);
  v6 = *(_DWORD *)(v3 + 4);
  if ( v6 == 2 || !v6 )
  {
    if ( !*(_QWORD *)a1 )
    {
      v7 = (_DWORD *)((char *)a1 + 40);
      goto LABEL_6;
    }
    v7 = (_DWORD *)((char *)a1 + 40);
    if ( *(_WORD *)(v1 + 2694) )
    {
      *v7 = 0;
      if ( *(_DWORD *)(v3 + 48) < 0x10u )
      {
        *(_DWORD *)(v3 + 56) = 16;
        *v7 = -1073676268;
      }
      else
      {
        if ( *(_BYTE *)(v1 + 1992) )
          *(_DWORD *)(v1 + 2696) |= 0x8000000u;
        v9 = *(_DWORD *)(v3 + 48);
        v10 = 20LL;
        if ( v9 < 0x14 )
          v10 = v9;
        if ( v10 >= *(unsigned __int16 *)(v1 + 2694) )
        {
          LOWORD(v9) = *(_WORD *)(v1 + 2694);
        }
        else if ( v9 >= 0x14 )
        {
          LOWORD(v9) = 20;
        }
        memmove(*(void **)(v3 + 40), (const void *)(v1 + 2692), (unsigned __int16)v9);
        *(_WORD *)(*(_QWORD *)(v3 + 40) + 2LL) = v9;
        *(_DWORD *)(v3 + 52) = (unsigned __int16)v9;
        *v7 = 0;
      }
    }
    else
    {
      *v7 = -1073741637;
    }
  }
  else
  {
    v7 = (_DWORD *)((char *)a1 + 40);
    *v7 = -1073741637;
  }
  v4 = 1;
LABEL_6:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x88u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      v5,
      v4,
      *v7);
  return v4;
}
