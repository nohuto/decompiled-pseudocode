/*
 * XREFs of sub_140030450 @ 0x140030450
 * Callers:
 *     <none>
 * Callees:
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_1400305F0 @ 0x1400305F0 (sub_1400305F0.c)
 *     sub_1400306EC @ 0x1400306EC (sub_1400306EC.c)
 *     sub_14003081C @ 0x14003081C (sub_14003081C.c)
 *     sub_140076618 @ 0x140076618 (sub_140076618.c)
 */

void __fastcall sub_140030450(char *Context)
{
  _QWORD *v2; // r8
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  char *v6; // r9
  unsigned __int64 v7; // rcx

  if ( !sub_140021280((__int64)Context) )
    return;
  v2 = Context + 2152;
  if ( *((_QWORD *)Context + 269) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) & 0x20) != 0 )
    {
      v6 = Context + 2152;
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)Context + 3) + 108LL) & 1) == 0 )
      {
LABEL_19:
        *v2 = 0LL;
        goto LABEL_3;
      }
      v6 = Context + 2152;
    }
    v7 = MEMORY[0xFFFFF78000000008] - *v2;
    *((_QWORD *)Context + 270) += v7 / 0x2710;
    if ( v7 / 0x2710 >= 0x2710 )
    {
      ++*((_DWORD *)Context + 550);
      v2 = v6;
    }
    if ( !*((_QWORD *)Context + 266) )
      *((_QWORD *)Context + 266) = *(_QWORD *)(*((_QWORD *)Context + 3) + 5216LL);
    goto LABEL_19;
  }
LABEL_3:
  ++*((_DWORD *)Context + 548);
  if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
    sub_140076618(
      *((_QWORD *)Context + 3),
      (unsigned int)&unk_140149F38,
      (_DWORD)v2,
      **((_QWORD **)Context + 234),
      *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL),
      Context[104],
      Context[105],
      Context[106]);
  sub_1400305F0(Context, 0LL);
  *(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) |= 8u;
  v3 = *((_QWORD *)Context + 234);
  v4 = *(_DWORD *)(v3 + 32);
  if ( (v4 & 0x10) != 0 )
    *(_DWORD *)(v3 + 32) = v4 & 0xFFFFFFEF;
  else
    *((_DWORD *)Context + 234) = 1;
  if ( (*(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) & 4) != 0 )
  {
    if ( sub_1400215B0((__int64)Context, 5) )
    {
      LOBYTE(v5) = 1;
      sub_14003081C(Context, v5);
    }
  }
  sub_1400306EC(Context);
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233));
}
