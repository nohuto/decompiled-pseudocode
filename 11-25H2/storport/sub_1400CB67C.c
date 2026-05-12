/*
 * XREFs of sub_1400CB67C @ 0x1400CB67C
 * Callers:
 *     sub_1400CB8A0 @ 0x1400CB8A0 (sub_1400CB8A0.c)
 *     sub_14018AB38 @ 0x14018AB38 (sub_14018AB38.c)
 * Callees:
 *     sub_1400BCC38 @ 0x1400BCC38 (sub_1400BCC38.c)
 *     sub_1400D16C4 @ 0x1400D16C4 (sub_1400D16C4.c)
 *     sub_1400DCB68 @ 0x1400DCB68 (sub_1400DCB68.c)
 *     sub_1400DD7C4 @ 0x1400DD7C4 (sub_1400DD7C4.c)
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 *     sub_1400E5FA4 @ 0x1400E5FA4 (sub_1400E5FA4.c)
 *     sub_140194600 @ 0x140194600 (sub_140194600.c)
 *     sub_140194D2C @ 0x140194D2C (sub_140194D2C.c)
 *     sub_140194F8C @ 0x140194F8C (sub_140194F8C.c)
 */

__int64 __fastcall sub_1400CB67C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5, PVOID *a6)
{
  _BYTE *v6; // rdi
  PEX_RUNDOWN_REF_CACHE_AWARE *v8; // rax
  int v9; // ebx
  PEX_RUNDOWN_REF_CACHE_AWARE *v10; // rcx
  PVOID v11; // rcx
  int v12; // eax
  PVOID DeferredContext[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+68h] [rbp+28h] BYREF

  v6 = a5;
  LODWORD(v15) = 0;
  DeferredContext[0] = 0LL;
  *a5 = 0;
  if ( *(_WORD *)(a2 + 16) == 0xFFFF )
  {
    v9 = sub_140194600(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), a1, 0, (int)a2 + 24, (__int64)DeferredContext);
    if ( v9 < 0 )
    {
      LODWORD(v15) = 5;
      goto LABEL_24;
    }
    v11 = DeferredContext[0];
    *v6 = 1;
    v9 = sub_140194D2C(v11);
    if ( v9 < 0 )
    {
      LODWORD(v15) = 6;
      goto LABEL_24;
    }
    v9 = sub_1400BCC38((__int64)DeferredContext[0]);
    if ( v9 < 0 )
    {
      LODWORD(v15) = 7;
      goto LABEL_24;
    }
    v10 = (PEX_RUNDOWN_REF_CACHE_AWARE *)DeferredContext[0];
  }
  else
  {
    v8 = (PEX_RUNDOWN_REF_CACHE_AWARE *)sub_1400D16C4(a1);
    DeferredContext[0] = v8;
    if ( !v8 )
    {
      LODWORD(v15) = 1;
      v9 = -1073741275;
      goto LABEL_24;
    }
    ExReInitializeRundownProtectionCacheAware(v8[69]);
    v9 = sub_1400BCC38((__int64)DeferredContext[0]);
    if ( v9 < 0 )
    {
      LODWORD(v15) = 2;
      goto LABEL_24;
    }
    v10 = (PEX_RUNDOWN_REF_CACHE_AWARE *)DeferredContext[0];
    if ( *((_DWORD *)DeferredContext[0] + 142) )
    {
      LODWORD(v15) = 3;
      v9 = -1073741808;
LABEL_8:
      ExReleaseRundownProtectionCacheAware(v10[69]);
      goto LABEL_24;
    }
    if ( (*((_BYTE *)DeferredContext[0] + 136) & 8) != 0 )
    {
      LODWORD(v15) = 4;
      v9 = -2147483631;
      goto LABEL_8;
    }
  }
  v12 = sub_1400DD7C4(v10, *(_WORD *)(a2 + 20), (__int64)&v15);
  v10 = (PEX_RUNDOWN_REF_CACHE_AWARE *)DeferredContext[0];
  v9 = v12;
  if ( v12 < 0 )
    goto LABEL_8;
  v9 = sub_140194F8C(DeferredContext[0]);
  if ( v9 >= 0 )
  {
    v9 = sub_1400E5FA4(DeferredContext[0]);
    if ( v9 >= 0 )
    {
      *a6 = DeferredContext[0];
      return (unsigned int)v9;
    }
    *((_DWORD *)DeferredContext[0] + 142) = 3;
    LODWORD(v15) = 29;
  }
  else
  {
    *((_DWORD *)DeferredContext[0] + 142) = 3;
    LODWORD(v15) = 28;
  }
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeferredContext[0] + 69));
  sub_1400DCB68(DeferredContext[0]);
LABEL_24:
  if ( *v6 )
  {
    sub_1400DEFC4(DeferredContext);
    *v6 = 0;
  }
  return (unsigned int)v9;
}
