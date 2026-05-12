/*
 * XREFs of sub_14007A7B0 @ 0x14007A7B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_1400305F0 @ 0x1400305F0 (sub_1400305F0.c)
 *     sub_14003081C @ 0x14003081C (sub_14003081C.c)
 *     sub_140076618 @ 0x140076618 (sub_140076618.c)
 *     sub_14007A988 @ 0x14007A988 (sub_14007A988.c)
 *     sub_1400BC33C @ 0x1400BC33C (sub_1400BC33C.c)
 */

void __fastcall sub_14007A7B0(char *Context)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // r9
  int v4; // ecx
  _QWORD *v5; // r8
  char *v6; // r9
  unsigned __int64 v7; // rcx

  if ( !sub_140021280((__int64)Context) )
    return;
  v2 = (_QWORD **)(Context + 1872);
  v3 = (_QWORD *)*((_QWORD *)Context + 234);
  v4 = *((_DWORD *)v3 + 8);
  if ( (v4 & 0x300) == 0x300 )
  {
    if ( (Context[507] & 4) == 0 )
      sub_1400BC33C(Context);
    PoFxReportDevicePoweredOn(**v2);
    return;
  }
  v5 = Context + 2216;
  if ( *((_QWORD *)Context + 277) )
  {
    if ( (v4 & 0x80u) != 0 )
    {
      v6 = Context + 2216;
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)Context + 3) + 108LL) & 1) == 0 )
      {
LABEL_15:
        *v5 = 0LL;
        v3 = *v2;
        goto LABEL_16;
      }
      v6 = Context + 2216;
      v2 = (_QWORD **)(Context + 1872);
    }
    v7 = MEMORY[0xFFFFF78000000008] - *v5;
    *((_QWORD *)Context + 278) += v7 / 0x2710;
    if ( v7 / 0x2710 >= 0x2710 )
    {
      ++*((_DWORD *)Context + 550);
      v5 = v6;
    }
    if ( !*((_QWORD *)Context + 276) )
      *((_QWORD *)Context + 276) = *(_QWORD *)(*((_QWORD *)Context + 3) + 5216LL);
    goto LABEL_15;
  }
LABEL_16:
  ++*((_DWORD *)Context + 548);
  if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
    sub_140076618(
      *((_QWORD *)Context + 3),
      &stru_14014A640,
      (_DWORD)v5,
      *v3,
      *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL),
      Context[104],
      Context[105],
      Context[106]);
  sub_1400305F0((__int64)Context, 0);
  *((_DWORD *)*v2 + 8) |= 8u;
  if ( sub_1400215B0((__int64)Context, 5) )
    sub_14003081C((__int64)Context);
  sub_14007A988(Context);
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233));
}
