/*
 * XREFs of MiInitializeBootKernelShadowStack @ 0x140703E70
 * Callers:
 *     MiInitializeBootKernelShadowStacks @ 0x140D024B0 (MiInitializeBootKernelShadowStacks.c)
 * Callees:
 *     MiInitializeBootShadowStackPage @ 0x140D02594 (MiInitializeBootShadowStackPage.c)
 */

__int64 __fastcall MiInitializeBootKernelShadowStack(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 result; // rax

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (a1 & 0xFFF) != 0 )
  {
    v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    goto LABEL_6;
  }
  v2 = v1 + 16;
  while ( v1 <= v2 )
  {
LABEL_6:
    result = MiInitializeBootShadowStackPage(v1, 0LL);
    v1 += 8LL;
  }
  return result;
}
