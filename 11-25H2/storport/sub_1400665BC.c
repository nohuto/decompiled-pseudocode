/*
 * XREFs of sub_1400665BC @ 0x1400665BC
 * Callers:
 *     sub_140012624 @ 0x140012624 (sub_140012624.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400665BC(__int64 a1)
{
  void *Data; // rbx
  unsigned int v2; // edi
  __int64 ActiveGroupCount; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rax
  unsigned __int16 i; // r8
  unsigned int j; // r9d
  __int64 v9; // rdx
  ULONG Type; // [rsp+40h] [rbp-48h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-44h] BYREF
  DEVPROPKEY PropertyKey; // [rsp+48h] [rbp-40h] BYREF

  Data = (void *)(a1 + 4656);
  v2 = 0;
  PropertyKey.pid = 1;
  PropertyKey.fmtid = (DEVPROPGUID)xmmword_14014A9D8;
  Type = 0;
  *(_DWORD *)(a1 + 4656) = 0;
  ActiveGroupCount = KeQueryActiveGroupCount();
  RequiredSize = 4;
  IoGetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 32), &PropertyKey, 0, 0, 4u, Data, &RequiredSize, &Type);
  if ( *(_BYTE *)(a1 + 4369) == 1 )
  {
    v5 = (__int64 *)(a1 + 4680);
    if ( *(char *)(a1 + 110) < 0 && *v5
      || (v6 = sub_1400143E0(64LL, ActiveGroupCount << 6, 1917083986LL, *(_QWORD *)(a1 + 8)), (*v5 = v6) != 0) )
    {
      for ( i = 0; i < (unsigned __int16)ActiveGroupCount; ++i )
      {
        for ( j = 0; j < 0x40; ++j )
        {
          v9 = (i << 6) + j;
          *(_BYTE *)(v9 + *v5) = -1;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
