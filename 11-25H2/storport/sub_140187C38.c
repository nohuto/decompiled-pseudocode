/*
 * XREFs of sub_140187C38 @ 0x140187C38
 * Callers:
 *     sub_14018576C @ 0x14018576C (sub_14018576C.c)
 *     sub_1401875C8 @ 0x1401875C8 (sub_1401875C8.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 *     sub_140067EAC @ 0x140067EAC (sub_140067EAC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_140187C38(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v4; // rax
  void *v5; // rdi
  _DWORD Dst[10]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v7; // [rsp+88h] [rbp-20h]
  int v8; // [rsp+C0h] [rbp+18h] BYREF

  memset_0(Dst, 0, 0x40uLL);
  if ( sub_140056088(a1) )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 6160) + 40LL) )
      return 0LL;
    v4 = sub_1400143E0(64LL, 512LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    v5 = (void *)v4;
    if ( v4 )
    {
      Dst[0] = 10;
      v7 = v7 & 0xFFFFFF00 | 0xD2;
      v8 = sub_140187D84(a1, v4, 0, 512, (__int64)Dst);
      v2 = v8;
      if ( v8 < 0 )
      {
        sub_140067EAC(0, &v8);
        ExFreePoolWithTag(v5, 0x464D6152u);
        return (unsigned int)v8;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 6160) + 40LL) = v5;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
