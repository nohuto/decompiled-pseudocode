/*
 * XREFs of sub_14008BF80 @ 0x14008BF80
 * Callers:
 *     <none>
 * Callees:
 *     sub_14002EDE0 @ 0x14002EDE0 (sub_14002EDE0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14008BF80(RTL_SRWLOCK *a1, int a2, _DWORD *a3, _QWORD *a4)
{
  RTL_SRWLOCK *v4; // rbx
  _QWORD *Ptr; // rax
  _QWORD *i; // rbx
  unsigned int v11; // ebx
  RTL_SRWLOCK *v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1 + 12;
  AcquireSRWLockShared(a1 + 12);
  Ptr = a1[14].Ptr;
  v13 = v4;
  for ( i = a1[13].Ptr; ; i += 2 )
  {
    if ( i == Ptr )
    {
      v11 = -2147023728;
      goto LABEL_6;
    }
    if ( *(_DWORD *)i == a2 )
      break;
  }
  *a3 = sub_1400B6010(i[1]);
  *a4 = sub_1400B6010(i[1]);
  v11 = 0;
LABEL_6:
  sub_14002EDE0(&v13);
  return v11;
}
