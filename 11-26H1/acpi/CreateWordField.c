/*
 * XREFs of CreateWordField @ 0x14003E8C0
 * Callers:
 *     <none>
 * Callees:
 *     CreateXField @ 0x140011840 (CreateXField.c)
 */

__int64 __fastcall CreateWordField(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 80) + 80LL;
  v6 = 0LL;
  result = CreateXField(a1, a2, v2, &v6);
  if ( !(_DWORD)result )
  {
    v5 = v6;
    *(_QWORD *)(v6 + 12) = *(unsigned int *)(*(_QWORD *)(a2 + 80) + 56LL);
    *(_DWORD *)(v5 + 20) = 16;
    *(_DWORD *)(v5 + 24) = 2;
  }
  return result;
}
