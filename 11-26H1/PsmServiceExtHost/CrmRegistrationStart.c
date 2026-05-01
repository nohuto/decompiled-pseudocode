/*
 * XREFs of CrmRegistrationStart @ 0x180030A3C
 * Callers:
 *     CrmSrvRegister @ 0x180031590 (CrmSrvRegister.c)
 *     CrmRegistrationStartWithActivity @ 0x18006BAAC (CrmRegistrationStartWithActivity.c)
 * Callees:
 *     CrmLogRegistrationStart @ 0x180030AC8 (CrmLogRegistrationStart.c)
 *     CempStringDuplicate @ 0x180030BA0 (CempStringDuplicate.c)
 *     CrmGlobalsRegistrationAdd @ 0x180030C60 (CrmGlobalsRegistrationAdd.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 */

__int64 __fastcall CrmRegistrationStart(__int64 a1, void *a2, int a3, __int64 a4)
{
  signed __int64 v7; // rax
  ULONG v8; // eax

  v7 = _InterlockedIncrement64(&qword_1800E3928);
  *(_DWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 16) = v7;
  if ( a2 )
  {
    v8 = RtlLengthSid(a2);
    memcpy_0((void *)(a1 + 72), a2, v8);
  }
  *(_QWORD *)(a1 + 144) = CempStringDuplicate(a4);
  CrmGlobalsRegistrationAdd(a1);
  CrmLogRegistrationStart(a1);
  return 0LL;
}
