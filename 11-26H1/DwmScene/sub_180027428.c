/*
 * XREFs of sub_180027428 @ 0x180027428
 * Callers:
 *     sub_18002521C @ 0x18002521C (sub_18002521C.c)
 *     sub_180050390 @ 0x180050390 (sub_180050390.c)
 *     sub_18005042C @ 0x18005042C (sub_18005042C.c)
 *     sub_1800504C8 @ 0x1800504C8 (sub_1800504C8.c)
 *     sub_180050564 @ 0x180050564 (sub_180050564.c)
 *     sub_180050600 @ 0x180050600 (sub_180050600.c)
 *     sub_18005069C @ 0x18005069C (sub_18005069C.c)
 *     sub_180050738 @ 0x180050738 (sub_180050738.c)
 *     sub_1800507D4 @ 0x1800507D4 (sub_1800507D4.c)
 *     sub_180057514 @ 0x180057514 (sub_180057514.c)
 *     sub_18005E630 @ 0x18005E630 (sub_18005E630.c)
 *     sub_180089C44 @ 0x180089C44 (sub_180089C44.c)
 *     sub_1800938B8 @ 0x1800938B8 (sub_1800938B8.c)
 *     sub_1800B8B8C @ 0x1800B8B8C (sub_1800B8B8C.c)
 *     sub_1800B8C28 @ 0x1800B8C28 (sub_1800B8C28.c)
 *     sub_1800B8CC4 @ 0x1800B8CC4 (sub_1800B8CC4.c)
 *     sub_1800B8D60 @ 0x1800B8D60 (sub_1800B8D60.c)
 *     sub_1800B8DFC @ 0x1800B8DFC (sub_1800B8DFC.c)
 *     sub_1800B8E98 @ 0x1800B8E98 (sub_1800B8E98.c)
 *     sub_1800B8F34 @ 0x1800B8F34 (sub_1800B8F34.c)
 *     sub_1800B8FD0 @ 0x1800B8FD0 (sub_1800B8FD0.c)
 *     sub_1800B906C @ 0x1800B906C (sub_1800B906C.c)
 *     sub_1800B9108 @ 0x1800B9108 (sub_1800B9108.c)
 *     sub_1800B91A4 @ 0x1800B91A4 (sub_1800B91A4.c)
 *     sub_1800B9240 @ 0x1800B9240 (sub_1800B9240.c)
 *     sub_1800B92DC @ 0x1800B92DC (sub_1800B92DC.c)
 *     sub_1800B9378 @ 0x1800B9378 (sub_1800B9378.c)
 *     sub_1800B9414 @ 0x1800B9414 (sub_1800B9414.c)
 *     sub_1800B94B0 @ 0x1800B94B0 (sub_1800B94B0.c)
 *     sub_1800B954C @ 0x1800B954C (sub_1800B954C.c)
 *     sub_1800CAA90 @ 0x1800CAA90 (sub_1800CAA90.c)
 *     sub_1800D4AA0 @ 0x1800D4AA0 (sub_1800D4AA0.c)
 * Callees:
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_180027428(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      sub_180013494(a2, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
