/*
 * XREFs of TopLevelExceptionFilter @ 0x14006EC80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140002020 @ 0x140002020 (sub_140002020.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_140027464 @ 0x140027464 (sub_140027464.c)
 *     sub_140072A78 @ 0x140072A78 (sub_140072A78.c)
 */

__int64 __fastcall TopLevelExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  unsigned int v1; // ebx
  unsigned int v2; // edi
  _DWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rax
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF

  v1 = dword_1400E8788;
  v2 = 0;
  if ( dword_1400E8788 )
  {
    v3 = (_DWORD *)sub_140006470((__int64)ExceptionInfo);
    if ( *v3 > 2u )
    {
      v9 = v1;
      sub_140002020((int)v3, (int)&unk_1400D26B2, v5, v6, (__int64)&v9);
    }
    if ( v1 )
    {
      do
      {
        v7 = (_QWORD *)sub_140027464(v4, v2);
        sub_140072A78(*v7);
        ++v2;
      }
      while ( v2 < v1 );
    }
  }
  return 0LL;
}
