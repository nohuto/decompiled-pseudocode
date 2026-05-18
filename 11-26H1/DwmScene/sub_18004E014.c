/*
 * XREFs of sub_18004E014 @ 0x18004E014
 * Callers:
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 * Callees:
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_18005D6DC @ 0x18005D6DC (sub_18005D6DC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_18004E014(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 **v8; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = **(_QWORD **)(a1 + 18560);
  v11 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    sub_18005D6DC(*(_QWORD *)(v4 + 64), a2);
    sub_18001D6F4(&v11, v5);
    v4 = v11;
  }
  v6 = **(__int64 ***)(a1 + 18576);
  while ( !*((_BYTE *)v6 + 25) )
  {
    v7 = v6[11];
    if ( v7 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, a2);
    v8 = (__int64 **)v6[2];
    if ( *((_BYTE *)v8 + 25) )
    {
      for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v6 = i;
      v6 = i;
    }
    else
    {
      v6 = (__int64 *)v6[2];
      for ( j = *v8; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v6 = j;
    }
  }
}
