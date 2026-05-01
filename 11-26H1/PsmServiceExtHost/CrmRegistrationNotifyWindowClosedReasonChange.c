/*
 * XREFs of CrmRegistrationNotifyWindowClosedReasonChange @ 0x18001D53C
 * Callers:
 *     CrmActivityUpdate @ 0x18001E5C0 (CrmActivityUpdate.c)
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x18002E5E0 (CrmSrvActivityWindowClosedReasonSubscribe.c)
 *     CrmActivityStart @ 0x180034D80 (CrmActivityStart.c)
 * Callees:
 *     CrmLogRegistrationNotifyWindowClosedReasonChange @ 0x180064760 (CrmLogRegistrationNotifyWindowClosedReasonChange.c)
 */

__int64 __fastcall CrmRegistrationNotifyWindowClosedReasonChange(__int64 a1, __int64 a2)
{
  int *v2; // rbx
  bool v4; // zf
  unsigned int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  int v12; // [rsp+48h] [rbp+18h] BYREF

  v2 = 0LL;
  v4 = *(_DWORD *)(a2 + 64) == 17;
  v12 = 0;
  if ( v4 )
  {
    v7 = 255;
    v12 = 255;
    if ( !*(_DWORD *)(a2 + 108) )
    {
LABEL_24:
      v6 = RtlPublishWnfStateData(*(_QWORD *)(a2 + 152), 0LL, &v12, 4LL, 0LL);
      v2 = &v12;
      return CrmLogRegistrationNotifyWindowClosedReasonChange(a1, a2, v2, v6);
    }
    v8 = *(_QWORD *)(a2 + 112);
    v9 = *(unsigned int *)(a2 + 108);
    v10 = (_DWORD *)(v8 + 32);
    while ( 1 )
    {
      if ( v10[4] )
      {
        switch ( *v10 )
        {
          case 7:
            v7 &= ~1u;
LABEL_22:
            v12 = v7;
            break;
          case 9:
            v7 &= ~2u;
            goto LABEL_22;
          case 0x10:
            v7 &= ~4u;
            goto LABEL_22;
          case 0x13:
            v7 &= ~8u;
            goto LABEL_22;
          case 0x14:
            v7 &= ~0x10u;
            goto LABEL_22;
          case 0x15:
            v7 &= ~0x20u;
            goto LABEL_22;
          case 0x16:
            v7 &= ~0x40u;
            goto LABEL_22;
          case 0x1A:
            v7 &= ~0x80u;
            goto LABEL_22;
        }
      }
      v10 += 14;
      if ( !--v9 )
        goto LABEL_24;
    }
  }
  v6 = RtlPublishWnfStateData(*(_QWORD *)(a2 + 152), 0LL, 0LL, 0LL, 0LL);
  return CrmLogRegistrationNotifyWindowClosedReasonChange(a1, a2, v2, v6);
}
