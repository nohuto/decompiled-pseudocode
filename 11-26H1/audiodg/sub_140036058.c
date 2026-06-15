/*
 * XREFs of sub_140036058 @ 0x140036058
 * Callers:
 *     sub_140059318 @ 0x140059318 (sub_140059318.c)
 * Callees:
 *     sub_140036140 @ 0x140036140 (sub_140036140.c)
 *     sub_1400592E4 @ 0x1400592E4 (sub_1400592E4.c)
 */

__int64 __fastcall sub_140036058(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  HRESULT v4; // ebx
  __int64 *v5; // rdi
  HRESULT v6; // eax
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  result = sub_140036140(a1, a2, 5LL);
  v4 = result;
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)result )
    {
      *(_BYTE *)(a1 + 96) = 0;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 96) )
      {
        v9 = -1LL;
        v4 = CoResumeClassObjects();
        if ( v4 < 0 )
        {
          SetEvent(*(HANDLE *)(a1 + 80));
          WaitForSingleObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, 2 * *(_DWORD *)(a1 + 88));
        }
        sub_1400592E4(&v9);
      }
      else
      {
        v4 = CoResumeClassObjects();
      }
      if ( v4 < 0 )
      {
        v5 = (__int64 *)off_1400E74C0;
        v6 = 0;
        v7 = (__int64 *)off_1400E74C8;
        while ( v5 < v7 && !v6 )
        {
          v8 = *v5;
          if ( *v5 )
          {
            if ( *(_DWORD *)(v8 + 40) )
            {
              v6 = CoRevokeClassObject(*(_DWORD *)(v8 + 40));
              v7 = (__int64 *)off_1400E74C8;
            }
          }
          ++v5;
        }
      }
    }
    return (unsigned int)v4;
  }
  return result;
}
