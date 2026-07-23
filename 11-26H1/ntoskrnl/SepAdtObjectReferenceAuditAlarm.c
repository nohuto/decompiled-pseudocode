/*
 * XREFs of SepAdtObjectReferenceAuditAlarm @ 0x140B52518
 * Callers:
 *     ObpCheckObjectReference @ 0x1408F4DF4 (ObpCheckObjectReference.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SepQueryNameString @ 0x140920B48 (SepQueryNameString.c)
 *     SepQueryTypeString @ 0x140A61E9C (SepQueryTypeString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepAdtObjectReferenceAuditAlarm(__int64 a1, __int64 *a2, unsigned int a3, char a4)
{
  __int64 v4; // r15
  unsigned __int16 *v5; // rsi
  __int64 v6; // rbx
  __int64 v9; // rax
  __int64 v11; // rbx
  __int64 v12; // r12
  signed int TypeString; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r8d
  unsigned __int16 *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int16 *v21; // [rsp+30h] [rbp-D8h] BYREF
  PVOID P; // [rsp+38h] [rbp-D0h] BYREF
  __int64 Src; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v24; // [rsp+4Ch] [rbp-BCh]
  int v25; // [rsp+58h] [rbp-B0h]
  _QWORD v26[129]; // [rsp+60h] [rbp-A8h]

  v4 = *a2;
  v5 = 0LL;
  v6 = a2[2];
  P = 0LL;
  v21 = 0LL;
  v9 = v4;
  if ( !v4 )
    v9 = v6;
  v11 = *(_QWORD *)(v6 + 24);
  v12 = **(_QWORD **)(v9 + 152);
  memset_0((char *)&Src + 4, 0, 0x418uLL);
  HIDWORD(Src) = 3;
  v25 = 524409;
  v24 = 4691LL;
  if ( !a4 )
    HIWORD(v25) = 16;
  TypeString = SepQueryNameString(a1, &P);
  if ( TypeString >= 0 )
  {
    TypeString = SepQueryTypeString(a1, (PVOID *)&v21);
    if ( TypeString < 0 )
    {
      v5 = v21;
    }
    else
    {
      LODWORD(v26[4 * HIDWORD(v24)]) = 4;
      HIDWORD(v26[4 * HIDWORD(v24)]) = 4 * *(unsigned __int8 *)(v12 + 1) + 8;
      v26[4 * HIDWORD(v24) + 3] = v12;
      ++HIDWORD(v24);
      LODWORD(v26[4 * HIDWORD(v24)]) = 1;
      HIDWORD(v26[4 * HIDWORD(v24)]) = 32;
      v26[4 * HIDWORD(v24) + 3] = &SeSubsystemName;
      v14 = 4LL * (unsigned int)++HIDWORD(v24);
      if ( v4 )
      {
        v15 = *(_QWORD *)(v4 + 24);
        LODWORD(v26[v14]) = 5;
        HIDWORD(v26[4 * HIDWORD(v24)]) = 8;
        v26[4 * HIDWORD(v24) + 1] = v15;
      }
      else
      {
        LODWORD(v26[v14]) = 5;
        HIDWORD(v26[4 * HIDWORD(v24)]) = 8;
        v26[4 * HIDWORD(v24) + 1] = v11;
      }
      v5 = v21;
      v16 = ++HIDWORD(v24);
      if ( v21 )
      {
        LODWORD(v26[4 * v16]) = 1;
        HIDWORD(v26[4 * HIDWORD(v24)]) = *v5 + 16;
        v26[4 * HIDWORD(v24) + 3] = v5;
        v16 = HIDWORD(v24);
      }
      v17 = (unsigned __int16 *)P;
      v18 = v16 + 1;
      HIDWORD(v24) = v16 + 1;
      if ( P )
      {
        LODWORD(v26[4 * v18]) = 1;
        HIDWORD(v26[4 * HIDWORD(v24)]) = *v17 + 16;
        v26[4 * HIDWORD(v24) + 3] = v17;
        LODWORD(v18) = HIDWORD(v24);
      }
      v19 = (unsigned int)(v18 + 1);
      HIDWORD(v24) = v19;
      LODWORD(v26[4 * v19]) = 7;
      HIDWORD(v26[4 * HIDWORD(v24)]) = 4;
      v26[4 * HIDWORD(v24) + 1] = a3;
      v26[4 * HIDWORD(v24) + 2] = v16;
      ++HIDWORD(v24);
      LODWORD(v26[4 * HIDWORD(v24)]) = 10;
      HIDWORD(v26[4 * HIDWORD(v24)]) = 4;
      v26[4 * HIDWORD(v24) + 1] = a3;
      ++HIDWORD(v24);
      LODWORD(v26[4 * HIDWORD(v24)]) = 11;
      HIDWORD(v26[4 * HIDWORD(v24)]) = 8;
      v26[4 * HIDWORD(v24) + 1] = a2[3];
      ++HIDWORD(v24);
      SepAdtLogAuditRecord((_DWORD *)&Src + 1);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( TypeString < 0 )
    SepAuditFailed(TypeString);
}
