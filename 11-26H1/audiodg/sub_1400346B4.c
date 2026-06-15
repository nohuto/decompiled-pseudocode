/*
 * XREFs of sub_1400346B4 @ 0x1400346B4
 * Callers:
 *     sub_1400344E0 @ 0x1400344E0 (sub_1400344E0.c)
 *     sub_1400345A8 @ 0x1400345A8 (sub_1400345A8.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000ED10 @ 0x14000ED10 (sub_14000ED10.c)
 *     sub_14000ED38 @ 0x14000ED38 (sub_14000ED38.c)
 *     sub_14000FFE4 @ 0x14000FFE4 (sub_14000FFE4.c)
 *     sub_1400100F0 @ 0x1400100F0 (sub_1400100F0.c)
 *     sub_1400101A8 @ 0x1400101A8 (sub_1400101A8.c)
 *     sub_140010994 @ 0x140010994 (sub_140010994.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140019370 @ 0x140019370 (sub_140019370.c)
 *     sub_140030488 @ 0x140030488 (sub_140030488.c)
 *     sub_1400304D0 @ 0x1400304D0 (sub_1400304D0.c)
 *     sub_140037724 @ 0x140037724 (sub_140037724.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14005C25C @ 0x14005C25C (sub_14005C25C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_1400346B4(__int64 a1)
{
  __int64 *v2; // r14
  __int64 v3; // rdx
  __int64 *v4; // rdx
  __int64 **v5; // rsi
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 **v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 *i; // rdx
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+60h] [rbp+18h] BYREF

  *(_QWORD *)a1 = &off_1400B8320;
  v2 = (__int64 *)(a1 + 304);
  v3 = *(_QWORD *)(a1 + 304);
  if ( v3 )
    sub_140019370(a1, v3);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v17 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  if ( *(_QWORD *)(a1 + 88) )
  {
    v5 = (__int64 **)(a1 + 72);
    while ( 1 )
    {
      v6 = *v5;
      if ( !*v5 )
        break;
      sub_140010994(&v16, v6[2]);
      v7 = *v6;
      *v5 = (__int64 *)*v6;
      if ( v7 )
        *(_QWORD *)(v7 + 8) = 0LL;
      else
        *(_QWORD *)(a1 + 80) = 0LL;
      sub_140030488(a1 + 72, v6);
      v8 = v16;
      if ( sub_1400B6010(v16) )
      {
        v15 = 0LL;
        if ( (int)sub_140037724(&v15) >= 0 )
        {
          v9 = sub_1400B6010(v8);
          sub_14005C25C(v15, v9);
        }
      }
      sub_140003238(&v16);
      if ( !*(_QWORD *)(a1 + 88) )
        goto LABEL_13;
    }
LABEL_27:
    sub_14004639C(2147500037LL, v4);
  }
LABEL_13:
  sub_140018FF0(&v17);
  if ( *(_QWORD *)(a1 + 136) )
  {
    v10 = (__int64 **)(a1 + 120);
    do
    {
      v4 = *v10;
      if ( !*v10 )
        goto LABEL_27;
      v11 = v4[2];
      v12 = *v4;
      *v10 = (__int64 *)*v4;
      if ( v12 )
        *(_QWORD *)(v12 + 8) = 0LL;
      else
        *(_QWORD *)(a1 + 128) = 0LL;
      sub_14000ED10(a1 + 120, v4);
      j_j__o_free(v11, 16LL);
    }
    while ( *(_QWORD *)(a1 + 136) );
  }
  EnterCriticalSection(&stru_1400E8750);
  v15 = &stru_1400E8750;
  for ( i = (__int64 *)qword_1400E7C38; i; i = (__int64 *)*i )
  {
    if ( i[2] == a1 )
    {
      sub_1400100F0(v13, i);
      break;
    }
  }
  sub_140018FF0(&v15);
  sub_140007CC0();
  sub_140003238(v2);
  sub_1400101A8(a1 + 272);
  sub_140003238((__int64 *)(a1 + 264));
  sub_140008C08((void **)(a1 + 224), 0LL);
  sub_140008C08((void **)(a1 + 216), 0LL);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  sub_14000ED38((__int64 *)(a1 + 120));
  sub_1400304D0((__int64 *)(a1 + 72));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  sub_14000FFE4((_QWORD *)(a1 + 24));
  sub_14001D96C((void **)(a1 + 8));
}
