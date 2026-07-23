/*
 * XREFs of SepSecurityDescriptorStrictLength @ 0x14091EFBC
 * Callers:
 *     SepCheckAndCopySelfRelativeSD @ 0x1404A8CA4 (SepCheckAndCopySelfRelativeSD.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x1404B1A48 (RtlLengthSecurityDescriptorStrict.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091D6BC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x14091F2B0 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091FB0C (SepAdtOpenObjectAuditAlarm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSecurityDescriptorStrictLength(__int64 a1)
{
  __int16 v1; // di
  __int16 v3; // bx
  __int64 v4; // r10
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned int v11; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx

  v1 = *(_WORD *)(a1 + 2);
  v3 = v1 & 0x8000;
  v4 = v1 < 0 ? 20 : 40;
  v5 = a1 + v4;
  if ( v1 >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v6 = *(unsigned int *)(a1 + 4);
    if ( !(_DWORD)v6 )
      goto LABEL_6;
    v7 = v6 + a1;
  }
  if ( v7 )
  {
    v8 = (4 * *(unsigned __int8 *)(v7 + 1) + 11) & 0xFFFFFFFC;
    LODWORD(v4) = v8 + v4;
    v5 = v7 + v8;
  }
LABEL_6:
  if ( v3 )
  {
    v9 = *(unsigned int *)(a1 + 8);
    if ( !(_DWORD)v9 )
      goto LABEL_12;
    v10 = a1 + v9;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 16);
  }
  if ( v10 )
  {
    v11 = (4 * *(unsigned __int8 *)(v10 + 1) + 11) & 0xFFFFFFFC;
    LODWORD(v4) = v11 + v4;
    v12 = v11 + v10;
    if ( v12 > v5 )
      v5 = v12;
  }
LABEL_12:
  if ( (v1 & 4) == 0 )
    goto LABEL_19;
  if ( v3 )
  {
    v13 = *(unsigned int *)(a1 + 16);
    if ( !(_DWORD)v13 )
      goto LABEL_19;
    v14 = a1 + v13;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 32);
  }
  if ( v14 )
  {
    v15 = (*(unsigned __int16 *)(v14 + 2) + 3) & 0xFFFFFFFC;
    v16 = v15 + v14;
    LODWORD(v4) = v15 + v4;
    if ( v16 > v5 )
      v5 = v16;
  }
LABEL_19:
  if ( (v1 & 0x10) == 0 )
    goto LABEL_26;
  if ( v3 )
  {
    v17 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v17 )
      goto LABEL_26;
    v18 = a1 + v17;
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 24);
  }
  if ( v18 )
  {
    v19 = (*(unsigned __int16 *)(v18 + 2) + 3) & 0xFFFFFFFC;
    v20 = v19 + v18;
    LODWORD(v4) = v19 + v4;
    if ( v20 > v5 )
      LODWORD(v5) = v20;
  }
LABEL_26:
  if ( v3 )
    return (unsigned int)(v5 - a1);
  else
    return (unsigned int)v4;
}
