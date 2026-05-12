/*
 * XREFs of sub_1400C72BC @ 0x1400C72BC
 * Callers:
 *     sub_14019A6A4 @ 0x14019A6A4 (sub_14019A6A4.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400C627C @ 0x1400C627C (sub_1400C627C.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400C72BC(_BYTE *SystemArgument2, char a2)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // rax

  v4 = 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)SystemArgument2 + 74) + 525LL) & 1) != 0 )
  {
    v6 = sub_1401225EC(SystemArgument2);
    v4 = v6;
    if ( v6 )
    {
      *(_DWORD *)(*(_QWORD *)v6 + 4256LL) |= 1u;
      *(_DWORD *)(*(_QWORD *)v6 + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)v6 + 4256LL) &= ~2u;
      *(_DWORD *)(*(_QWORD *)v6 + 4256LL) &= ~0x40u;
      *(_WORD *)(*(_QWORD *)v6 + 4252LL) = 0;
      *(_QWORD *)(*(_QWORD *)v6 + 4184LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)v6 + 4192LL) = sub_1400C7410;
      *(_QWORD *)(*(_QWORD *)v6 + 4200LL) = v6;
      *(_QWORD *)(*(_QWORD *)v6 + 4160LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)v6 + 4168LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)v6 + 4248LL) = 0;
      sub_1400C627C(*(_QWORD *)v6 + 4096LL, a2, (SystemArgument2[1096] & 4) != 0);
      v5 = sub_1400BD378(SystemArgument2, v4);
    }
    else
    {
      v5 = -1073741670;
    }
  }
  else
  {
    v5 = -1073741637;
  }
  sub_140122C20(SystemArgument2, v4);
  return v5;
}
