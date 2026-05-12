/*
 * XREFs of sub_140071474 @ 0x140071474
 * Callers:
 *     sub_14006CE64 @ 0x14006CE64 (sub_14006CE64.c)
 *     DllUnload @ 0x1400A5240 (DllUnload.c)
 * Callees:
 *     sub_14006ED30 @ 0x14006ED30 (sub_14006ED30.c)
 */

__int64 __fastcall sub_140071474(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  signed __int32 v5; // edi
  __int64 v7; // [rsp+20h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  DestinationString = 0LL;
  if ( qword_140168828 )
  {
    byte_140168830 = 0;
    _m_prefetchw(&dword_1401687EC);
    v4 = (unsigned int)dword_1401687EC;
    v5 = _InterlockedOr(&dword_1401687EC, 0);
    if ( v5 )
    {
      v3 = -1073740024;
    }
    else if ( _InterlockedExchange64(&qword_140168828, 0LL) )
    {
      qword_140168850 = 0LL;
      qword_1401687E0 = 0LL;
      qword_140168858 = 0LL;
      qword_1401687F8 = 0LL;
      qword_140168878 = 0LL;
      qword_140168868 = 0LL;
      qword_140168810 = 0LL;
      qword_140168870 = 0LL;
      qword_1401687D8 = 0LL;
      qword_140168838 = 0LL;
      qword_1401687C8 = 0LL;
      qword_140168898 = 0LL;
      qword_140168780 = 0LL;
      qword_1401687B8 = 0LL;
      ObfDereferenceObject(Object);
      Object = 0LL;
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\StorportExt");
      ZwUnloadDriver(&DestinationString);
    }
    if ( (byte_1401694F6 & 0x20) != 0 )
    {
      LODWORD(v7) = v5;
      sub_14006ED30(v4, a2, a3, v3, v7);
    }
  }
  return v3;
}
